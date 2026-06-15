/*
 * XREFs of sub_18001B8D0 @ 0x18001B8D0
 * Callers:
 *     sub_180017CA0 @ 0x180017CA0 (sub_180017CA0.c)
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 *     sub_1800F61F8 @ 0x1800F61F8 (sub_1800F61F8.c)
 *     sub_1800F6338 @ 0x1800F6338 (sub_1800F6338.c)
 *     sub_1800F6478 @ 0x1800F6478 (sub_1800F6478.c)
 * Callees:
 *     sub_1800488A0 @ 0x1800488A0 (sub_1800488A0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 sub_18001B8D0(__int64 a1, _QWORD **a2, ...)
{
  char *v3; // rax
  int v4; // esi
  int v5; // ebx
  int v6; // r10d
  void *v7; // r11
  char *v8; // rcx
  char *v9; // r9
  int v10; // edx
  int v11; // r8d
  int i; // edx
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  void *Src; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[5]; // [rsp+28h] [rbp-40h] BYREF
  char v20; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+98h] [rbp+30h]
  int v22; // [rsp+A0h] [rbp+38h] BYREF
  int v23; // [rsp+A4h] [rbp+3Ch]
  char *v24; // [rsp+A8h] [rbp+40h] BYREF
  _QWORD *v25; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  int *v27; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  va_list va2; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v25 = va_arg(va1, _QWORD *);
  va_copy(va2, va1);
  v27 = va_arg(va2, int *);
  v23 = HIDWORD(a1);
  v24 = 0LL;
  v22 = 0;
  Src = 0LL;
  va_copy((va_list)&pv[1], va);
  pv[2] = &v24;
  va_copy((va_list)&pv[3], va1);
  pv[4] = &v22;
  v20 = 1;
  if ( !a2 )
  {
    v7 = &unk_18019F460;
    v24 = (char *)&unk_18019F460;
LABEL_24:
    v5 = 0;
    goto LABEL_25;
  }
  if ( ((unsigned int (__fastcall *)(_QWORD **))(*a2)[7])(a2) )
  {
    v3 = (char *)&unk_18019F2D0;
    v4 = 2;
  }
  else
  {
    v3 = (char *)&unk_18019F078;
    v4 = 3;
  }
  v24 = v3;
  Src = 0LL;
  pv[0] = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD *, LPVOID *))(*a2[2] + 40LL))(a2[2], pv);
  if ( v5 >= 0 )
    v5 = MMDevAPI_29(pv[0], &Src);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  if ( v5 >= 0 )
  {
    v22 = 0;
    v6 = 0;
    v7 = v24;
    while ( 1 )
    {
      v8 = &v24[200 * v6];
      v9 = (char *)((_BYTE *)Src - v8);
      do
      {
        v10 = *(unsigned __int16 *)&v9[(_QWORD)v8];
        v11 = *(unsigned __int16 *)v8 - v10;
        if ( v11 )
          break;
        v8 += 2;
      }
      while ( v10 );
      if ( !v11 )
        goto LABEL_24;
      v22 = ++v6;
      if ( v6 >= v4 )
      {
        v22 = 0;
        for ( i = 0; i < v4; v22 = i )
        {
          v13 = i;
          if ( !*(_DWORD *)&v24[200 * i + 148] )
            break;
          v13 = ++i;
        }
        if ( v13 >= v4 )
        {
          v22 = v4 - 1;
          *(_DWORD *)&v24[200 * v4 - 56] = 100;
          *(_WORD *)&v24[200 * v22] = 0;
        }
        else
        {
          v14 = sub_1800488A0(a2);
          *(_DWORD *)&v24[200 * v22 + 144] = v14;
          v15 = -1LL;
          v16 = -1LL;
          do
            ++v16;
          while ( *((_WORD *)Src + v16) );
          if ( v16 >= 0x46 )
          {
            v15 = 70LL;
          }
          else
          {
            do
              ++v15;
            while ( *((_WORD *)Src + v15) );
          }
          memcpy(&v24[200 * v22], Src, 2 * v15);
          *(_WORD *)&v24[200 * v22 + 2 * v15] = 0;
        }
        v7 = v24;
        goto LABEL_24;
      }
    }
  }
  sub_18004BD84(retaddr, 170LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", (unsigned int)v5);
  v7 = v24;
LABEL_25:
  *v25 = v7;
  *v27 = v22;
  if ( Src )
    CoTaskMemFree(Src);
  return (unsigned int)v5;
}
