/*
 * XREFs of RegisterDefaultClass @ 0x1C00A2B84
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C001DF70 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C00A3E30 (NtUserRegisterClassExWOW.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C008D05C (InternalRegisterClassEx.c)
 */

__int64 __fastcall RegisterDefaultClass(wchar_t *Str1)
{
  int v2; // r13d
  int v3; // r12d
  __int64 IntegerAtom; // r15
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  const wchar_t *v7; // rdx
  bool v8; // zf
  __int64 result; // rax
  __int64 *v10; // rax
  __int16 v11; // dx
  unsigned int v12; // r8d
  _BYTE v13[4]; // [rsp+20h] [rbp-60h] BYREF
  int v14; // [rsp+24h] [rbp-5Ch]
  __int64 v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+30h] [rbp-50h]
  int v17; // [rsp+34h] [rbp-4Ch]
  __int64 v18; // [rsp+38h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+78h] [rbp-8h]
  int v27; // [rsp+7Ch] [rbp-4h]
  __int16 v28; // [rsp+B0h] [rbp+30h] BYREF

  v2 = 1;
  v3 = *(_DWORD *)(gptiCurrent + 480LL) & 4;
  v28 = 0;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    IntegerAtom = (unsigned __int8)RtlGetIntegerAtom(Str1, &v28);
  }
  else
  {
    v28 = (__int16)Str1;
    IntegerAtom = 1LL;
  }
  v5 = 0;
  v6 = &gDefaultServerClasses;
  while ( 1 )
  {
    if ( v3 && (*(_DWORD *)v6 & 1) == 0 || ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 840LL) >> v5) & 1) != 0 )
      goto LABEL_10;
    v2 = 0;
    if ( IntegerAtom )
      break;
    v7 = (const wchar_t *)v6[5];
    if ( ((unsigned __int64)v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v8 = _wcsicmp(Str1, v7) == 0;
      goto LABEL_9;
    }
LABEL_10:
    ++v5;
    v6 += 6;
    if ( v5 >= 8 )
      goto LABEL_11;
  }
  v8 = v28 == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)v6 >> 3) & 0x1F) + 868);
LABEL_9:
  if ( !v8 )
    goto LABEL_10;
  v16 = 0;
  v18 = hModuleWin;
  v19 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v17 = 0;
  v27 = 1;
  v14 = *((_DWORD *)&gDefaultServerClasses + 12 * v5 + 2);
  v15 = *((_QWORD *)&gDefaultServerClasses + 6 * v5 + 2);
  v26 = *((_DWORD *)&gDefaultServerClasses + 12 * v5 + 6);
  if ( (*((_DWORD *)&gDefaultServerClasses + 12 * v5) & 2) != 0 && (v10 = (__int64 *)gasyscur[1]) != 0LL )
    v20 = *v10;
  else
    v20 = 0LL;
  v11 = *((_WORD *)&gDefaultServerClasses + 24 * v5 + 2);
  v12 = *((unsigned __int16 *)&gDefaultServerClasses + 24 * v5 + 3) | 0x41;
  v21 = *((_QWORD *)&gDefaultServerClasses + 6 * v5 + 4);
  v23 = *((_QWORD *)&gDefaultServerClasses + 6 * v5 + 5);
  v25 = v23;
  result = InternalRegisterClassEx((__int64)v13, v11, v12, 0LL);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 840LL) |= 1 << v5;
LABEL_11:
    if ( v2 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) |= 0x2000u;
    return 1LL;
  }
  return result;
}
