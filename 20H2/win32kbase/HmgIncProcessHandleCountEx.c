/*
 * XREFs of HmgIncProcessHandleCountEx @ 0x1C00CF1F8
 * Callers:
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 *     HmgAlloc @ 0x1C003D700 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003DC40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C003E6B4 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ @ 0x1C00CF0D0 (-Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00CF140 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C013CC2C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall HmgIncProcessHandleCountEx(int a1, char a2, int a3)
{
  unsigned int v4; // edi
  int v5; // edx
  __int64 v6; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rbx
  int v8; // r8d
  __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // r8d
  int v12; // eax
  int v13; // r9d
  __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF
  int v16; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v16) = a2;
  v4 = 1;
  if ( a1 && a1 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v6, v5, v8);
      if ( a3 || *((_DWORD *)W32ProcessFromId + 15) < gProcessHandleQuota )
      {
        if ( (unsigned int)Feature_Servicing_gdi_leak_tracking__private_IsEnabled() )
        {
          HmgpIncProcessHandleCountEx(W32ProcessFromId);
        }
        else
        {
          v10 = *((_DWORD *)W32ProcessFromId + 16);
          if ( ++*((_DWORD *)W32ProcessFromId + 15) > v10 )
            v10 = *((_DWORD *)W32ProcessFromId + 15);
          *((_DWORD *)W32ProcessFromId + 16) = v10;
        }
      }
      else
      {
        v4 = 0;
        if ( (unsigned int)Feature_Servicing_gdi_leak_tracking__private_IsEnabled() )
        {
          v12 = *((_DWORD *)W32ProcessFromId + 72);
          if ( (v12 & 8) == 0 )
          {
            *((_DWORD *)W32ProcessFromId + 72) = v12 | 8;
            if ( (unsigned int)dword_1C0243250 > 5 && tlgKeywordOn((__int64)&dword_1C0243250, 0x400000000000LL) )
            {
              v16 = *((_DWORD *)W32ProcessFromId + 15);
              v15[0] = 0x1000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                (unsigned int)&dword_1C0243250,
                (unsigned int)&unk_1C02130CB,
                v11,
                v13,
                (__int64)&v16,
                (__int64)v15);
            }
          }
        }
      }
      GreReleaseHmgrSemaphore(v10, v9, v11);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return v4;
}
