/*
 * XREFs of KsepDbQueryRegistryDeviceDataList @ 0x1408BFC20
 * Callers:
 *     KseQueryDeviceDataList @ 0x1408BF540 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371274 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14037129C (KsepPoolAllocatePaged.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     KsepRegistryOpenKey @ 0x14075B624 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x14075B9C0 (KsepStringFree.c)
 *     KsepStringTransform @ 0x14075FAF8 (KsepStringTransform.c)
 *     KsepRegistryEnumValue @ 0x1408C156C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C1668 (KsepRegistryQueryKeyInformation.c)
 */

__int64 __fastcall KsepDbQueryRegistryDeviceDataList(_WORD *a1, char *a2, unsigned int a3, _DWORD *a4)
{
  ULONG v4; // r15d
  int KeyInformation; // ebx
  PVOID Paged; // r14
  unsigned int v8; // edi
  char *v9; // r12
  int v10; // eax
  size_t v11; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-30h] BYREF
  size_t v14; // [rsp+38h] [rbp-28h]
  size_t v15; // [rsp+40h] [rbp-20h]
  size_t Size; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  _WORD *v18; // [rsp+58h] [rbp-8h]

  v4 = 0;
  v17 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Size = 0LL;
  KeyInformation = KsepStringTransform((__int64)&v17, a1);
  if ( KeyInformation >= 0 )
  {
    if ( (int)KsepRegistryOpenKey(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v18,
                &Handle) >= 0 )
    {
      KeyInformation = KsepRegistryQueryKeyInformation(Handle);
      if ( KeyInformation >= 0 )
      {
        Paged = KsepPoolAllocatePaged(v14);
        if ( Paged )
        {
          if ( KsepPoolAllocatePaged(v15) )
          {
            v8 = 0;
            v9 = a2;
            while ( 1 )
            {
              v10 = KsepRegistryEnumValue(Handle, v4, (__int64)&Size);
              KeyInformation = v10;
              if ( v10 == -2147483622 )
                break;
              if ( v10 < 0 )
                goto LABEL_17;
              v11 = Size;
              v8 += Size;
              if ( v8 <= a3 )
              {
                memmove(v9, Paged, Size);
                v9 += v11;
              }
              ++v4;
            }
            *a4 = v8 + 2;
            if ( (unsigned __int64)v8 + 2 <= a3 )
            {
              KeyInformation = 0;
              *(_WORD *)&a2[2 * ((unsigned __int64)v8 >> 1)] = 0;
            }
            else
            {
              KeyInformation = -1073741789;
            }
          }
          else
          {
            KeyInformation = -1073741801;
          }
LABEL_17:
          KsepPoolFreePaged(Paged);
        }
        else
        {
          KeyInformation = -1073741801;
        }
      }
    }
    else
    {
      KeyInformation = -1073741275;
    }
    if ( Handle )
    {
      ZwClose(Handle);
      _InterlockedIncrement(dword_140C2AA7C);
    }
  }
  KsepStringFree((__int64)&v17);
  return (unsigned int)KeyInformation;
}
