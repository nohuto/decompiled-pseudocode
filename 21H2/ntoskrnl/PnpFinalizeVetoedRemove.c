/*
 * XREFs of PnpFinalizeVetoedRemove @ 0x140950530
 * Callers:
 *     PiCheckRemovalPreconditions @ 0x14076556C (PiCheckRemovalPreconditions.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PiEventBuildPdoList @ 0x1407663DC (PiEventBuildPdoList.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14095E4BC (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     McTemplateK0zqz_EtwWriteTransfer @ 0x140562860 (McTemplateK0zqz_EtwWriteTransfer.c)
 */

char __fastcall PnpFinalizeVetoedRemove(__int64 a1, unsigned __int64 a2, UNICODE_STRING *a3)
{
  _DWORD *v3; // rax
  const wchar_t *v4; // rbx
  int v6; // ebp
  __int64 v8; // rcx
  wchar_t *Buffer; // rax
  char result; // al
  __int64 v11; // rax
  __int64 v12; // r9

  v3 = *(_DWORD **)(a1 + 48);
  v4 = 0LL;
  v6 = a2;
  if ( v3 )
    *v3 = a2;
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 && a3 )
    RtlCopyUnicodeString((PUNICODE_STRING)v8, a3);
  if ( (*(_DWORD *)(a1 + 144) & 8) != 0 && v6 == 6 )
  {
    Buffer = a3->Buffer;
    v8 = 0LL;
    a2 = (unsigned __int64)Buffer + a3->Length;
    if ( (unsigned __int64)Buffer < a2 )
    {
      while ( 1 )
      {
        if ( *Buffer == 92 )
        {
          v8 = (unsigned int)(v8 + 1);
          if ( (_DWORD)v8 == 3 )
            break;
        }
        if ( (unsigned __int64)++Buffer >= a2 )
          goto LABEL_14;
      }
      a3->Length = (_WORD)Buffer - LOWORD(a3->Buffer);
    }
  }
LABEL_14:
  result = byte_140C0DD4B;
  if ( byte_140C0DD4B < 0 )
  {
    v11 = *(_QWORD *)(a1 + 152);
    if ( v11 )
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
    else
      v12 = 0LL;
    if ( a3 )
      v4 = a3->Buffer;
    return McTemplateK0zqz_EtwWriteTransfer(v8, a2, (const GUID *)(a1 + 88), *(const wchar_t **)(v12 + 48), v6, v4);
  }
  return result;
}
