/*
 * XREFs of McGenControlCallbackV2 @ 0x1403C6540
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     memset @ 0x140414300 (memset.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x1404F1190 (McTemplateK0jq_EtwWriteTransfer.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned int v8; // r8d
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  bool v11; // r11
  int v12; // edx
  int *v13; // rcx
  int v14; // eax
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 i; // rdi
  int v19; // eax

  if ( !CallbackContext )
    return;
  if ( !ControlCode )
  {
    v19 = *((unsigned __int16 *)CallbackContext + 21);
    *((_DWORD *)CallbackContext + 9) = 0;
    *((_BYTE *)CallbackContext + 40) = 0;
    *((_QWORD *)CallbackContext + 2) = 0LL;
    *((_QWORD *)CallbackContext + 3) = 0LL;
    if ( !(_WORD)v19 )
      return;
    memset(*((void **)CallbackContext + 6), 0, 4LL * ((v19 - 1) / 32 + 1));
LABEL_23:
    if ( ControlCode != 1 )
      return;
    goto LABEL_13;
  }
  if ( ControlCode != 1 )
    goto LABEL_23;
  *((_BYTE *)CallbackContext + 40) = Level;
  v8 = 0;
  *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
  *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
  for ( *((_DWORD *)CallbackContext + 9) = 1; v8 < *((unsigned __int16 *)CallbackContext + 21); ++v8 )
  {
    v9 = *((_BYTE *)CallbackContext + 40);
    v11 = 0;
    if ( *(_BYTE *)(v8 + *((_QWORD *)CallbackContext + 8)) <= v9 || !v9 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v8);
      if ( !v10
        || (v10 & *((_QWORD *)CallbackContext + 2)) != 0
        && (v10 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
      {
        v11 = 1;
      }
    }
    v12 = 1 << (v8 & 0x1F);
    v13 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v8 >> 5));
    v14 = *v13;
    if ( v11 )
      v15 = v14 | v12;
    else
      v15 = v14 & ~v12;
    *v13 = v15;
  }
LABEL_13:
  ExAcquireResourceSharedLite(&Resource, 1u);
  for ( i = FsRtlTieringHeatData; (__int64 *)i != &FsRtlTieringHeatData; i = *(_QWORD *)i )
  {
    if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 1) != 0 )
      McTemplateK0jq_EtwWriteTransfer(v17, v16, 0LL, i + 20, *(_DWORD *)(i + 36));
  }
  ExReleaseResourceLite(&Resource);
}
