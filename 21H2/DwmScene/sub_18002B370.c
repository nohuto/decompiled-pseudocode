/*
 * XREFs of sub_18002B370 @ 0x18002B370
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18011ABCC @ 0x18011ABCC (sub_18011ABCC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18002B370(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  bool v7; // sf
  bool v8; // of
  _QWORD v10[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 4288);
  if ( a2 > 6 )
  {
    if ( a2 == 7 )
    {
      v8 = __OFSUB__(v2, 37632);
      v7 = v2 - 37632 < 0;
      return v7 == v8;
    }
    if ( a2 == 8 )
    {
      v8 = __OFSUB__(v2, 41216);
      v7 = v2 - 41216 < 0;
      return v7 == v8;
    }
    if ( a2 >= 12 )
    {
      if ( a2 == 12 )
        goto LABEL_9;
      if ( (unsigned int)(a2 - 13) <= 2 )
        return 0;
LABEL_21:
      sub_18000FE28(v10);
      sub_18011ABCC(pExceptionObject, v10, 0LL);
      throw (Spectre::Utils::SpectreException *)pExceptionObject;
    }
    return 1;
  }
  if ( a2 == 6 )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_9;
  v3 = a2 - 1;
  if ( !v3 )
    goto LABEL_9;
  v4 = v3 - 1;
  if ( !v4 )
  {
    v8 = __OFSUB__(v2, 37376);
    v7 = v2 - 37376 < 0;
    return v7 == v8;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 1;
  v6 = v5 - 1;
  if ( !v6 )
    return 1;
  if ( v6 != 1 )
    goto LABEL_21;
LABEL_9:
  v8 = __OFSUB__(v2, 40960);
  v7 = v2 - 40960 < 0;
  return v7 == v8;
}
