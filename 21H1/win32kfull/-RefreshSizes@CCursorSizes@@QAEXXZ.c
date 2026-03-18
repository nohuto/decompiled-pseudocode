/*
 * XREFs of ?RefreshSizes@CCursorSizes@@QAEXXZ @ 0xA27AC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _EditionUpdateCursorSizes@0 @ 0xA279C (_EditionUpdateCursorSizes@0.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 *     ??0CCursorSizes@@QAE@XZ @ 0xEBFC6 (--0CCursorSizes@@QAE@XZ.c)
 * Callees:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QAEJXZ @ 0x98B28 (-AcquireLockExclusive@CPushLock@@QAEJXZ.c)
 *     ?ReleaseLock@CPushLock@@QBEXXZ @ 0x9ACAE (-ReleaseLock@CPushLock@@QBEXXZ.c)
 *     _GetCursorSizeFromIndex@4 @ 0xA2940 (_GetCursorSizeFromIndex@4.c)
 *     _GetCursorSizesIndexFromDpi@4 @ 0xA296A (_GetCursorSizesIndexFromDpi@4.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YGXI@Z @ 0x14318C (-_CleanupUnneededSystemCursorSizes@@YGXI@Z.c)
 */

void __thiscall CCursorSizes::RefreshSizes(CCursorSizes *this)
{
  INT v2; // ebx
  int v3; // eax
  unsigned int v4; // esi
  __int64 CursorSizeFromIndex; // rax
  _DWORD *v6; // edi
  INT v7; // eax
  int i; // edx
  __int64 CursorSizesIndexFromDpi; // rax
  int *v10; // edx
  int v11; // edi
  int v12; // esi
  unsigned int j; // ecx
  unsigned int k; // esi
  char v15; // bl
  int v16; // edi
  int v17; // ecx
  int v18; // edi
  int v19; // ecx
  int v21; // ecx
  INT v22; // [esp-4h] [ebp-7Ch]
  unsigned int v23; // [esp+0h] [ebp-78h]
  char v24; // [esp+13h] [ebp-65h]
  int v26; // [esp+18h] [ebp-60h] BYREF
  int v27; // [esp+1Ch] [ebp-5Ch] BYREF
  int v28; // [esp+20h] [ebp-58h] BYREF
  _DWORD v29[10]; // [esp+24h] [ebp-54h] BYREF
  _DWORD v30[10]; // [esp+4Ch] [ebp-2Ch] BYREF

  v24 = 0;
  v2 = *(_DWORD *)UPDWORDPointer(8232);
  CPushLock::AcquireLockExclusive((CCursorSizes *)((char *)this + 64));
  v3 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 1) = v2;
  v27 = v3;
  qmemcpy(v29, (char *)this + 24, sizeof(v29));
  v4 = 0;
  CursorSizeFromIndex = GetCursorSizeFromIndex(0);
  v6 = (_DWORD *)HIDWORD(CursorSizeFromIndex);
  v26 = CursorSizeFromIndex;
  do
  {
    v22 = CursorSizeFromIndex;
    v7 = GetCursorSizeFromIndex(v4);
    LODWORD(CursorSizeFromIndex) = EngMulDiv(v7, v2, v22);
    *v6 = 0;
    ++v4;
    v6[1] = CursorSizeFromIndex;
    v6 += 2;
    LODWORD(CursorSizeFromIndex) = v26;
  }
  while ( v4 < 5 );
  for ( i = *(_DWORD *)(_gpDispInfo + 56); i; i = *(_DWORD *)(HIDWORD(CursorSizesIndexFromDpi) + 28) )
  {
    CursorSizesIndexFromDpi = GetCursorSizesIndexFromDpi(*(unsigned __int16 *)(*(_DWORD *)(i + 20) + 56));
    *((_DWORD *)this + 2 * CursorSizesIndexFromDpi + 6) = 1;
  }
  qmemcpy(v30, (char *)this + 24, sizeof(v30));
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
  if ( v2 != v27 && (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(8, 0) )
  {
    v27 = v2;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      (int)&unk_253C38,
      v17,
      v17,
      (int)&v27);
  }
  v10 = v30;
  v11 = 5;
  do
  {
    v12 = *v10;
    for ( j = 0; j < 5; ++j )
    {
      if ( v12 && v29[2 * j] && v10[1] == v29[2 * j + 1] )
      {
        v12 = 0;
        v29[2 * j] = 0;
      }
    }
    *v10 = v12;
    v10 += 2;
    --v11;
  }
  while ( v11 );
  for ( k = 0; k < 10; k += 2 )
  {
    if ( v29[k] )
    {
      v18 = v29[k + 1];
      if ( (unsigned int)dword_2689E8 > 5 && (unsigned __int8)_tlgKeywordOn(8, 0) )
      {
        v26 = v18;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (int)&dword_2689E8,
          (int)&unk_253C00,
          v19,
          v19,
          (int)&v26);
      }
      _CleanupUnneededSystemCursorSizes(v23);
    }
    if ( v30[k] )
    {
      v15 = 1;
      v16 = v30[k + 1];
      v24 = 1;
      if ( (unsigned int)dword_2689E8 > 5 )
      {
        if ( (unsigned __int8)_tlgKeywordOn(8, 0) )
        {
          v28 = v16;
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (int)&dword_2689E8,
            (int)&unk_253BCC,
            v21,
            v21,
            (int)&v28);
        }
      }
    }
    else
    {
      v15 = v24;
    }
  }
  if ( v15 )
  {
    _InterlockedOr(&Feedback::gdwPointerCursorOps, 4u);
    KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
  }
  CCursorSizes::UpdateGlobalCursorSize(this, (const struct tagPOINT *)(_gpsi + 4428), 1);
}
