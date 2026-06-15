/*
 * XREFs of sub_1800CAA70 @ 0x1800CAA70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C6940 @ 0x1800C6940 (sub_1800C6940.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CAA70(__int64 a1, _WORD *a2, void (__fastcall **a3)(_QWORD, __int64 *), char a4)
{
  void (__fastcall **v5)(_QWORD, __int64 *); // r13
  __int64 v7; // rdi
  int v8; // esi
  struct _RTL_CRITICAL_SECTION *v9; // r15
  struct _RTL_CRITICAL_SECTION *v10; // r14
  __int64 v11; // rax
  int *v13; // rbx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-78h]
  ATL::CAtlException *v15; // [rsp+38h] [rbp-60h] BYREF
  void (__fastcall **v16[11])(_QWORD, __int64 *); // [rsp+40h] [rbp-58h] BYREF

  v5 = a3;
  v7 = a1;
  v8 = 0;
  if ( a4 )
    *(_BYTE *)(a1 + 301) = 1;
  if ( (unsigned int)sub_1800C6940((unsigned __int16 **)(a1 + 320), (__int64)a2) && (a4 || !*(_BYTE *)(v7 + 301)) )
  {
    v9 = (struct _RTL_CRITICAL_SECTION *)(v7 + 352);
    v10 = (struct _RTL_CRITICAL_SECTION *)(v7 + 352);
    v14 = (struct _RTL_CRITICAL_SECTION *)(v7 + 352);
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 352));
    v8 = 0;
    if ( a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
    }
    else
    {
      LODWORD(v11) = 0;
    }
    try
    {
      sub_18002BB70((__int64 *)(v7 + 320), a2, v11);
    }
    catch ( ATL::CAtlException *v15 )
    {
      v13 = (int *)v15;
      if ( *(_DWORD *)v15 == -1073741571 )
        o__resetstkoflw();
      v7 = a1;
      v5 = a3;
      v8 = *v13;
      v10 = v14;
      v9 = v14;
    }
    if ( v9 )
      LeaveCriticalSection(v10);
    if ( v8 < 0 )
    {
      sub_18005E8F8((__int64)"CAudioSession::SetDisplayName", 260, v8);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v16[0] = (void (__fastcall **)(_QWORD, __int64 *))off_180155250;
      v16[1] = (void (__fastcall **)(_QWORD, __int64 *))v7;
      v16[2] = *(void (__fastcall ***)(_QWORD, __int64 *))(v7 + 320);
      v16[3] = v5;
      sub_18002E440((LPCRITICAL_SECTION)(v7 + 496), v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v8;
}
