/*
 * XREFs of HamHostIdInitializeKey @ 0x180007040
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18000AB30 (memset_0.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180010530 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180011D54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall HamHostIdInitializeKey(
        __int64 a1,
        void *a2,
        int a3,
        int a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned __int16 *v12; // rax
  __int64 v13; // rbx
  unsigned __int16 v14; // cx
  unsigned __int16 *v15; // rcx
  char *v16; // rdx
  unsigned __int16 v17; // ax
  unsigned __int64 v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a4;
  if ( !(unsigned __int8)PsmIsValidKey() )
    return 3221225711LL;
  if ( !RtlValidSid(a2) )
    return 3221225712LL;
  if ( (unsigned int)v6 > 3 )
    return 3221225714LL;
  v10 = 256LL;
  if ( a5 && (int)StringCchLengthW(a5, 0x100uLL, v19) < 0 )
    return 3221225715LL;
  memset_0(a6, 0, 0x418uLL);
  v11 = 232LL;
  v12 = a6;
  v13 = a1 - (_QWORD)a6;
  while ( v11 != -2147483414 )
  {
    v14 = *(unsigned __int16 *)((char *)v12 + v13);
    if ( !v14 )
      break;
    *v12++ = v14;
    if ( !--v11 )
    {
      --v12;
      break;
    }
  }
  *v12 = 0;
  RtlCopySid(0x44u, a6 + 232, a2);
  v15 = a6 + 268;
  if ( a5 )
  {
    StringCchCopyW(v15, 0x100uLL, a5);
  }
  else
  {
    v16 = (char *)((char *)off_180016230[v6] - (char *)v15);
    while ( v10 != -2147483390 )
    {
      v17 = *(unsigned __int16 *)((char *)v15 + (_QWORD)v16);
      if ( !v17 )
        break;
      *v15++ = v17;
      if ( !--v10 )
      {
        --v15;
        break;
      }
    }
    *v15 = 0;
  }
  *((_DWORD *)a6 + 133) = a3;
  return 0LL;
}
