/*
 * XREFs of LdrQueryProcessModuleInformationEx2 @ 0x1800CE278
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x1800D83D0 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrpReadMemory @ 0x180001340 (LdrpReadMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx2(
        _QWORD *a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  _WORD *v5; // rdi
  _QWORD *v6; // r14
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  unsigned __int64 v9; // r15
  unsigned int *v10; // rcx
  int v11; // esi
  int v12; // r12d
  int Memory; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v21; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-98h] BYREF
  int v23; // [rsp+44h] [rbp-94h]
  int v24; // [rsp+48h] [rbp-90h]
  __int64 v25; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-80h]
  int v27; // [rsp+60h] [rbp-78h]
  __int64 v28; // [rsp+68h] [rbp-70h] BYREF
  __int64 v29; // [rsp+70h] [rbp-68h]
  _QWORD v30[12]; // [rsp+78h] [rbp-60h] BYREF
  __int16 v31; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+10h]
  unsigned int v33; // [rsp+F8h] [rbp+20h]

  v33 = a4;
  v32 = a2;
  v5 = a3;
  v6 = a1;
  v7 = 2;
  v30[0] = 0LL;
  v30[1] = LdrpProtectedCopyMemory;
  v30[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 >= 2 )
  {
    *a3 = 0;
    v8 = 0;
  }
  else
  {
    v8 = -1073741820;
    v5 = 0LL;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v6 = v30;
  v9 = 0LL;
  v26 = 0LL;
  v10 = a5;
  while ( v9 < (unsigned __int64)(a2 & 1) + 1 )
  {
    v11 = 10240;
    v12 = 1;
    if ( v10 )
      *v10 = v7;
    v29 = a2 & 2;
    if ( (a2 & 2) != 0 )
      off_18011DCA0[5 * v9 + 3]();
    Memory = ((__int64 (__fastcall *)(_QWORD *, __int64 *, __int64 *))off_18011DCA0[5 * v9])(v6, &v25, &v28);
    if ( Memory < 0 )
    {
LABEL_14:
      v8 = Memory;
      goto LABEL_36;
    }
    v14 = v25;
    if ( v25 )
    {
      Memory = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))off_18011DCA0[5 * v9 + 1])(v6, v25, &v21);
      if ( Memory < 0 )
        goto LABEL_14;
      while ( v21 != v25 )
      {
        if ( !v11 )
        {
          v8 = -1073741271;
          break;
        }
        v23 = --v11;
        v27 = v11;
        v7 += 320 * v12;
        v12 = 1;
        v24 = 1;
        if ( v33 >= v7 )
        {
          *v5 = 320;
          Memory = ((__int64 (__fastcall *)(_QWORD *, _WORD *, __int64, __int64, __int64))off_18011DCA0[5 * v9 + 2])(
                     v6,
                     v5 + 4,
                     v21,
                     v28,
                     v32);
          if ( Memory < 0 )
            goto LABEL_14;
          v15 = *((_QWORD *)v5 + 3);
          if ( v15 )
          {
            Memory = LdrpReadMemory((__int64)v6, v15 + 60, (__int64)&v22, 4LL);
            if ( Memory < 0 )
              goto LABEL_14;
            v16 = *((_QWORD *)v5 + 3) + v22;
            Memory = LdrpReadMemory((__int64)v6, v16 + 8, (__int64)(v5 + 154), 4LL);
            if ( Memory < 0 )
              goto LABEL_14;
            v17 = v16 + 24;
            Memory = LdrpReadMemory((__int64)v6, v17 + 64, (__int64)(v5 + 152), 4LL);
            if ( Memory < 0 )
              goto LABEL_14;
            Memory = LdrpReadMemory((__int64)v6, v17, (__int64)&v31, 2LL);
            if ( Memory < 0 )
              goto LABEL_14;
            if ( v31 == 267 )
            {
              v18 = 28LL;
              v19 = 4LL;
            }
            else
            {
              v18 = 24LL;
              v19 = 8LL;
            }
            Memory = LdrpReadMemory((__int64)v6, v18 + v17, (__int64)(v5 + 156), v19);
            if ( Memory < 0 )
              goto LABEL_14;
            v5 += 160;
            v30[3] = v5;
            *v5 = 0;
            v11 = v23;
          }
          else
          {
            v12 = 0;
            v24 = 0;
          }
        }
        else
        {
          v8 = -1073741820;
        }
        Memory = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))off_18011DCA0[5 * v9 + 1])(v6, v21, &v21);
        if ( Memory < 0 )
          goto LABEL_14;
      }
    }
LABEL_36:
    if ( v29 )
      ((void (__fastcall *)(__int64 (__fastcall **)(), __int64, _QWORD))off_18011DCA0[5 * v9 + 4])(
        off_18011DCA0,
        v14,
        0LL);
    v10 = a5;
    if ( a5 )
      *a5 = v7;
    v26 = ++v9;
    LOBYTE(a2) = v32;
  }
  return v8;
}
