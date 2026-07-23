/*
 * XREFs of _RtlpCopyProcString@16 @ 0x4B2A8706
 * Callers:
 *     _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307 (_RtlCreateProcessParametersInternal@48.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

char *__fastcall RtlpCopyProcString(void **a1, int a2, const void **a3, int a4)
{
  char *v5; // ebx
  unsigned __int16 v6; // ax
  char *result; // eax
  size_t v8; // [esp-4h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-4h]

  v9 = a2;
  if ( a3[1] && *(_WORD *)a3 )
  {
    LODWORD(v8) = *(unsigned __int16 *)a3;
    memcpy(*a1, a3[1], v8);
    a2 = v9;
  }
  v5 = (char *)*a1;
  *(_DWORD *)(a2 + 4) = *a1;
  v6 = *(_WORD *)a3;
  *(_WORD *)a2 = *(_WORD *)a3;
  *(_WORD *)(a2 + 2) = a4;
  if ( v6 < (unsigned __int16)a4 )
  {
    LODWORD(v8) = (unsigned __int16)a4 - v6;
    memset(&v5[v6], 0, v8);
  }
  result = &v5[(a4 + 3) & 0xFFFFFFFC];
  *a1 = result;
  return result;
}
