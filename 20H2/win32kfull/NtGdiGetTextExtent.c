/*
 * XREFs of NtGdiGetTextExtent @ 0x1C02AE400
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtent(HDC a1, const void *a2, signed int a3, struct tagSIZE *a4, unsigned int a5)
{
  struct tagSIZE *v5; // r14
  __int64 v6; // r13
  char *v9; // rdi
  unsigned int TextExtentW; // ebx
  ULONG64 v11; // rax
  struct tagSIZE v13; // [rsp+50h] [rbp-88h] BYREF
  HDC v14; // [rsp+58h] [rbp-80h]
  HDC v15; // [rsp+60h] [rbp-78h]
  struct tagSIZE *v16; // [rsp+68h] [rbp-70h]
  char v17; // [rsp+70h] [rbp-68h] BYREF

  v5 = a4;
  v6 = a3;
  v14 = a1;
  v15 = a1;
  v16 = a4;
  v13 = 0LL;
  v9 = 0LL;
  TextExtentW = 0;
  if ( a3 < 0 )
    return TextExtentW;
  if ( !a3 )
  {
    TextExtentW = 1;
LABEL_21:
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (struct tagSIZE *)MmUserProbeAddress;
    *v5 = v13;
    return TextExtentW;
  }
  if ( a2 )
  {
    if ( a3 > 16 )
    {
      if ( (unsigned __int64)a3 <= 0x1388000 )
        v9 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * a3));
    }
    else
    {
      v9 = &v17;
    }
    if ( v9 )
    {
      v11 = (ULONG64)a2 + 2 * v6;
      if ( v11 < (unsigned __int64)a2 || v11 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v9, a2, 2 * v6);
      TextExtentW = 1;
    }
    a1 = v14;
  }
  if ( TextExtentW )
    TextExtentW = GreGetTextExtentW(a1, (unsigned __int16 *)v9, a3, &v13, a5);
  if ( (int)v6 > 16 && v9 )
    FreeTmpBuffer(v9);
  if ( TextExtentW )
    goto LABEL_21;
  return TextExtentW;
}
