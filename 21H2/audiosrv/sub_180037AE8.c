/*
 * XREFs of sub_180037AE8 @ 0x180037AE8
 * Callers:
 *     sub_180037AB0 @ 0x180037AB0 (sub_180037AB0.c)
 *     sub_1800CAE90 @ 0x1800CAE90 (sub_1800CAE90.c)
 * Callees:
 *     sub_1800020C8 @ 0x1800020C8 (sub_1800020C8.c)
 *     sub_1800024A4 @ 0x1800024A4 (sub_1800024A4.c)
 *     sub_180002834 @ 0x180002834 (sub_180002834.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180037AE8(__int64 a1, int a2, char a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v9; // r14d
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  void *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  float v23; // [rsp+A0h] [rbp+8h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 5u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 77LL, &unk_18015DEF0, a1);
  }
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)qword_18019E618 + 192LL))(
    qword_18019E618,
    lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  lpCriticalSection[1] = (LPCRITICAL_SECTION)(a1 + 48);
  v9 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= *(_QWORD *)(a1 + 104) )
        sub_1800B8610(2147942487LL);
      v11 = *(_BYTE **)(*(_QWORD *)(a1 + 96) + 8 * v10);
      sub_180002834(v10, (__int64)v11, &v23, &v20);
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 5u )
      {
        sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 78LL, &unk_18015DEF0, a1, v11);
      }
      if ( a2 == 3 )
        v12 = v11[224] != 0 ? 0x3D0900 : 0;
      else
        v12 = a2 == 4 ? (v11[224] != 0 ? 0x2710 : 0) : v20;
      v13 = sub_1800020C8((__int64)v11, v23, v12, a5 == 0);
      v15 = retaddr;
      if ( v13 < 0 )
        break;
      if ( a5 )
      {
        LOBYTE(v14) = a3;
        v13 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 104LL))(v11, v14, 0LL);
        v15 = retaddr;
        if ( v13 < 0 )
        {
          v18 = 4205LL;
          goto LABEL_33;
        }
        LOBYTE(v19) = 1;
        v13 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, __int64, __int64, int))(*(_QWORD *)v11 + 96LL))(
                v11,
                v16,
                a5,
                a6,
                v12,
                v19);
        v15 = retaddr;
        if ( v13 < 0 )
        {
          v18 = 4208LL;
          goto LABEL_33;
        }
      }
LABEL_19:
      v17 = sub_1800024A4((__int64)v11);
      if ( v17 < 0 )
        sub_18006D26C(retaddr, 4214LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v17);
      v10 = ++v9;
      if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_4;
    }
    v18 = 4200LL;
LABEL_33:
    sub_18006D26C(v15, v18, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v13);
    goto LABEL_19;
  }
LABEL_4:
  if ( a1 != -48 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
}
