/*
 * XREFs of ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C001DC28
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00FEF88 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C001DD10 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCat(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2, ULONG a3)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rbx
  size_t v7; // rdx
  __int64 v8; // rcx
  ULONG v9; // r8d
  NTSTATUS v10; // r10d
  wchar_t *Buffer; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // r11
  _WORD *v14; // rdx
  __int16 v15; // cx
  __int64 v16; // rbx

  v5 = 0LL;
  v6 = 0LL;
  v10 = RtlUnicodeStringValidateWorker(a1, (const size_t)a2, a3);
  if ( v10 >= 0 )
  {
    if ( v8 )
    {
      v5 = *(_QWORD *)(v8 + 8);
      v6 = (unsigned __int64)*(unsigned __int16 *)(v8 + 2) >> 1;
    }
    Buffer = 0LL;
    v12 = 0LL;
    v10 = RtlUnicodeStringValidateWorker(a2, v7, v9);
    if ( v10 >= 0 )
    {
      if ( a2 )
      {
        Buffer = a2->Buffer;
        v12 = (unsigned __int64)a2->Length >> 1;
      }
      v14 = (_WORD *)(v5 + 2 * v13);
      v15 = 0;
      v10 = 0;
      v16 = v6 - v13;
      if ( !v16 )
        goto LABEL_13;
      do
      {
        if ( !v12 )
          break;
        --v12;
        *v14++ = *Buffer++;
        ++v15;
        --v16;
      }
      while ( v16 );
      if ( !v16 )
      {
LABEL_13:
        if ( v12 )
          v10 = -2147483643;
      }
      a1->Length = 2 * (v15 + v13);
    }
  }
  return (unsigned int)v10;
}
