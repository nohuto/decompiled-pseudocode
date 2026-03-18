/*
 * XREFs of NtGdiGetStringBitmapW @ 0x1C02984D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0297584 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 */

__int64 __fastcall NtGdiGetStringBitmapW(
        HDC a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned int a4,
        volatile void *Address)
{
  struct STRINGBITMAP *v8; // r14
  unsigned int v9; // esi
  unsigned int StringBitmapW; // eax
  unsigned __int16 v12; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+20h]

  v13 = a4;
  v12 = 0;
  v8 = 0LL;
  v9 = 1;
  if ( (_DWORD)a3 != 1 )
    return 0LL;
  if ( a4 )
  {
    if ( a4 > 0x2710000 || (v8 = (struct STRINGBITMAP *)AllocFreeTmpBuffer(a4)) == 0LL )
      v9 = 0;
  }
  if ( !v9 )
    goto LABEL_15;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned __int16 *)MmUserProbeAddress;
  v12 = *a2;
  StringBitmapW = GreGetStringBitmapW(a1, &v12, a3, v8, a4);
  v9 = StringBitmapW;
  if ( !StringBitmapW || StringBitmapW > a4 )
    goto LABEL_15;
  if ( v8 )
  {
    ProbeForWrite(Address, StringBitmapW, 1u);
    memmove((void *)Address, v8, v9);
LABEL_15:
    if ( v8 )
      FreeTmpBuffer(v8);
  }
  return v9;
}
