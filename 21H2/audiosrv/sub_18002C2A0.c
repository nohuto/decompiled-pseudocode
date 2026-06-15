/*
 * XREFs of sub_18002C2A0 @ 0x18002C2A0
 * Callers:
 *     sub_18002ADD8 @ 0x18002ADD8 (sub_18002ADD8.c)
 *     sub_18002AF64 @ 0x18002AF64 (sub_18002AF64.c)
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 *     sub_1800D0C30 @ 0x1800D0C30 (sub_1800D0C30.c)
 *     sub_1800D83F0 @ 0x1800D83F0 (sub_1800D83F0.c)
 *     sub_1800ED398 @ 0x1800ED398 (sub_1800ED398.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002C4D0 @ 0x18002C4D0 (sub_18002C4D0.c)
 *     sub_18002C550 @ 0x18002C550 (sub_18002C550.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800C2D44 @ 0x1800C2D44 (sub_1800C2D44.c)
 *     sub_1800C7588 @ 0x1800C7588 (sub_1800C7588.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800CD548 @ 0x1800CD548 (sub_1800CD548.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 *     sub_1800CF46C @ 0x1800CF46C (sub_1800CF46C.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18002C2A0(__int64 a1, unsigned int a2, char a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r12
  __int64 v9; // rax
  LPCRITICAL_SECTION *v10; // rsi
  __int64 v11; // r12
  int i; // r13d
  __int64 v13; // rbx
  LPCRITICAL_SECTION *j; // r15
  _QWORD *v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // [rsp+20h] [rbp-A8h]
  __int64 v21; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+30h] [rbp-98h] BYREF
  __int128 v23; // [rsp+38h] [rbp-90h] BYREF
  LPCRITICAL_SECTION *v24; // [rsp+48h] [rbp-80h]
  __int64 v25; // [rsp+50h] [rbp-78h]
  __int64 v26; // [rsp+58h] [rbp-70h]
  __int64 v27; // [rsp+60h] [rbp-68h]
  __int64 v28; // [rsp+68h] [rbp-60h] BYREF
  __int64 v29; // [rsp+70h] [rbp-58h]
  __int64 v30; // [rsp+78h] [rbp-50h]
  int v31; // [rsp+80h] [rbp-48h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+E8h] [rbp+20h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 50LL, &unk_18015DFC8, *(_QWORD *)(a1 + 296));
  }
  v23 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019EE50 + 24LL))(
         qword_18019EE50,
         *(_QWORD *)(a1 + 296),
         &v22);
  v7 = v5;
  if ( v5 < 0 )
  {
    sub_18004BD84(
      retaddr,
      1540LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (unsigned int)v5);
    sub_18000F708(&v22);
    return v7;
  }
  else
  {
    if ( a2 == 6 || a2 == 1 )
    {
      v10 = (LPCRITICAL_SECTION *)*((_QWORD *)&v23 + 1);
    }
    else
    {
      sub_18002C550(v6, &lpCriticalSection, v22);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v26 = a1 + 128;
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
      v25 = a1 + 128;
      v8 = *(_QWORD *)(a1 + 168);
      v9 = *(_QWORD *)(a1 + 176);
      v10 = (LPCRITICAL_SECTION *)*((_QWORD *)&v23 + 1);
      v27 = v8;
      if ( v8 != v9 )
      {
        v21 = 0LL;
        if ( (int)sub_1800CD4DC(v8, &v21) >= 0 && v21 )
        {
          lpCriticalSection = 0LL;
          if ( (int)sub_1800CD548(&v21, &lpCriticalSection) >= 0 )
          {
            (*(void (__fastcall **)(LPCRITICAL_SECTION, _QWORD))&lpCriticalSection->DebugInfo[7].EntryCount)(
              lpCriticalSection,
              *(_QWORD *)(a1 + 296));
            if ( v24 == v10 )
            {
              sub_1800CD5C4(&v23, v10, &lpCriticalSection);
            }
            else
            {
              *v10 = lpCriticalSection;
              sub_180047458(v10);
              *((_QWORD *)&v23 + 1) = v10 + 1;
            }
          }
          JUMPOUT(0x180092153LL);
        }
        JUMPOUT(0x180092161LL);
      }
      if ( a1 != -128 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
    }
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v25 = a1 + 16;
    if ( a2 == 1 )
      JUMPOUT(0x1800921B1LL);
    lpCriticalSection = (LPCRITICAL_SECTION)sub_18002C4D0(a1 + 56);
    while ( lpCriticalSection )
    {
      v16 = *(_QWORD **)sub_1800CF46C(a1 + 56, &lpCriticalSection);
      v20 = v16;
      if ( v16 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
        LOBYTE(v17) = a3;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v20[2] + 32LL))(v20 + 2, a2, v17);
        (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      }
    }
    v11 = v28;
    if ( a1 != -16 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    for ( i = 0; i < (int)v29; ++i )
    {
      v18 = (_QWORD *)sub_1800C2D44(&v28);
      sub_1800C7588(*v18);
      v19 = (_QWORD *)sub_1800C2D44(&v28);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 16LL))(*v19);
    }
    if ( a2 == 6 )
    {
      v13 = v23;
    }
    else
    {
      v13 = v23;
      for ( j = (LPCRITICAL_SECTION *)v23; j != v10; ++j )
        (*(void (__fastcall **)(LPCRITICAL_SECTION, _QWORD))&(*j)->DebugInfo[7].Flags)(*j, *(_QWORD *)(a1 + 296));
    }
    if ( v11 )
      _o_free(v11);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v13 )
    {
      sub_1800CD58C(v13);
      sub_1800472E0(v13, ((unsigned __int64)v24 - v13) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return 0LL;
  }
}
