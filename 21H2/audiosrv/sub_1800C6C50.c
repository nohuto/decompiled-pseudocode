/*
 * XREFs of sub_1800C6C50 @ 0x1800C6C50
 * Callers:
 *     sub_1800C6F60 @ 0x1800C6F60 (sub_1800C6F60.c)
 *     sub_1800C7000 @ 0x1800C7000 (sub_1800C7000.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     sub_18005244C @ 0x18005244C (sub_18005244C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C66A4 @ 0x1800C66A4 (sub_1800C66A4.c)
 *     sub_1800C7054 @ 0x1800C7054 (sub_1800C7054.c)
 *     sub_1800C92EC @ 0x1800C92EC (sub_1800C92EC.c)
 *     sub_1800CA560 @ 0x1800CA560 (sub_1800CA560.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C6C50(__int64 a1, int a2, char a3)
{
  int v3; // ebx
  __int64 v4; // rsi
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  void ***v10; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // r14
  struct _RTL_CRITICAL_SECTION *v12; // r15
  __int64 v13; // r14
  unsigned int v14; // r15d
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  ATL::CAtlException *v19; // rbx
  void *v20[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v21; // [rsp+40h] [rbp-68h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-60h]
  void (__fastcall **v23[2])(_QWORD, __int64 *); // [rsp+50h] [rbp-58h] BYREF
  int v24; // [rsp+60h] [rbp-48h]
  ATL::CAtlException *v25[2]; // [rsp+68h] [rbp-40h] BYREF
  ATL::CAtlException *v26; // [rsp+78h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = (_DWORD *)sub_180008448(a1, sub_1800B6240)[1];
  if ( *v5 > 4u )
  {
    LODWORD(v30) = v3;
    v20[0] = *(void **)(v4 + 712);
    sub_1800512F4((__int64)v5, byte_180166AEA, v6, v7, v20, (__int64)&v30);
  }
  v21 = v4 + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
  lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 32);
  v8 = 5;
  if ( v3 == 5 && (!*(_QWORD *)(v4 + 88) || *(_BYTE *)(**(_QWORD **)(v4 + 80) + 52LL)) )
  {
    if ( v4 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
    return 0LL;
  }
  while ( 2 )
  {
    if ( *(_QWORD *)(v4 + 88) )
    {
      v10 = (void ***)(v4 + 80);
      try
      {
        v20[0] = **v10;
        sub_1800CA560(v10, 0LL);
      }
      catch ( ATL::CAtlException *v25 )
      {
        v19 = v25[0];
        if ( *(_DWORD *)v25[0] == -1073741571 )
          o__resetstkoflw();
        LODWORD(v30) = *(_DWORD *)v19;
        v8 = 5;
        v4 = a1;
        v3 = a2;
        if ( (int)v30 >= 0 )
          goto LABEL_44;
        continue;
      }
LABEL_44:
      try
      {
        v12 = (struct _RTL_CRITICAL_SECTION *)(v4 + 112);
        v11 = (struct _RTL_CRITICAL_SECTION *)(v4 + 112);
        v30 = (struct _RTL_CRITICAL_SECTION *)(v4 + 112);
        EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 112));
        v25[1] = (ATL::CAtlException *)(v4 + 112);
        sub_1800C66A4((_QWORD *)(v4 + 152), v20);
      }
      catch ( ATL::CAtlException *v26 )
      {
        if ( *(_DWORD *)v26 == -1073741571 )
          o__resetstkoflw();
        v8 = 5;
        v4 = a1;
        v3 = a2;
        v11 = v30;
        v12 = v30;
      }
      if ( v12 )
        LeaveCriticalSection(v11);
      continue;
    }
    break;
  }
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  v13 = v4 - 16;
  v14 = sub_1800C7054(v4 - 16);
  if ( !*(_DWORD *)(v4 + 392) )
    sub_18005244C((_QWORD *)(v4 - 16));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v4 - 16);
  v23[0] = (void (__fastcall **)(_QWORD, __int64 *))off_180155240;
  v23[1] = (void (__fastcall **)(_QWORD, __int64 *))(v4 - 16);
  v24 = v3;
  sub_18002E440((LPCRITICAL_SECTION)(v4 + 480), v23);
  if ( a3 )
  {
    if ( v3 )
    {
      v15 = v3 - 1;
      if ( !v15 )
        goto LABEL_26;
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 != 1 )
LABEL_26:
              v8 = 1;
          }
          else
          {
            v8 = 4;
          }
        }
        else
        {
          v8 = 3;
        }
      }
      else
      {
        v8 = 2;
      }
    }
    else
    {
      v8 = 0;
    }
    sub_1800C92EC(v4 - 16, v8);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v4 - 16);
  return v14;
}
