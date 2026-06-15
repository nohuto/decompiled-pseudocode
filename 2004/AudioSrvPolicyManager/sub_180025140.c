/*
 * XREFs of sub_180025140 @ 0x180025140
 * Callers:
 *     sub_180007980 @ 0x180007980 (sub_180007980.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000ED88 @ 0x18000ED88 (sub_18000ED88.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     sub_18001E454 @ 0x18001E454 (sub_18001E454.c)
 *     sub_18001FFCC @ 0x18001FFCC (sub_18001FFCC.c)
 *     sub_1800203F4 @ 0x1800203F4 (sub_1800203F4.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180025140(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // ebx
  _WORD *v10; // rax
  __int64 v11; // r8
  const wchar_t *v12; // rdi
  unsigned __int64 v13; // rdx
  wchar_t *v14; // rsi
  __int64 v15; // rbx
  DWORD v16; // eax
  const wchar_t *v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  int v21; // eax
  _BYTE v22[4]; // [rsp+40h] [rbp-48h] BYREF
  DWORD dwMilliseconds; // [rsp+44h] [rbp-44h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-40h] BYREF
  float v25; // [rsp+4Ch] [rbp-3Ch] BYREF
  __int64 v26; // [rsp+50h] [rbp-38h]
  _QWORD v27[6]; // [rsp+58h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  int v29; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int8 v30; // [rsp+A0h] [rbp+18h] BYREF
  char v31; // [rsp+A8h] [rbp+20h] BYREF

  v26 = 0LL;
  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 24LL))();
    v5 = v4;
    if ( v4 >= 0 )
    {
      v27[0] = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 32LL))(a2, v27);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v10 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 72LL))(v27[0]);
        v12 = (const wchar_t *)(a1 + 24);
        v13 = -1LL;
        do
          ++v13;
        while ( v10[v13] );
        if ( v13 > *(_QWORD *)(a1 + 48) )
        {
          sub_18000ED88((char **)(a1 + 24), v13, v11, v10);
        }
        else
        {
          v14 = (wchar_t *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 48) >= 8uLL )
            v14 = *(wchar_t **)v12;
          *(_QWORD *)(a1 + 40) = v13;
          v15 = v13;
          memmove(v14, v10, 2 * v13);
          v14[v15] = 0;
        }
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
        *(_DWORD *)(a1 + 20) = v16;
        v17 = (const wchar_t *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 48) >= 8uLL )
          v17 = *(const wchar_t **)v12;
        v18 = sub_18001FFCC((__int64)&v30, v17, v16, &v31, &v30, (__int64)&v25, &v29, (__int64)v22);
        v19 = v18;
        if ( v18 >= 0 )
        {
          if ( v31 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
            sub_18001E454(qword_18004FE78, v20, 4u);
          }
          if ( v30 || (_BYTE)v29 )
          {
            dwMilliseconds = 0;
            pcbData = 4;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"AastRenderDelayInMs",
              0x18u,
              0LL,
              &dwMilliseconds,
              &pcbData);
            if ( dwMilliseconds )
              Sleep(dwMilliseconds);
            if ( *(_QWORD *)(a1 + 48) >= 8uLL )
              v12 = *(const wchar_t **)v12;
            v21 = sub_1800203F4((unsigned __int8)v29, v12, v30, v25, (unsigned __int8)v29, v22[0]);
            if ( v21 < 0 )
              sub_18000F8F4(
                retaddr,
                104,
                (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                v21);
          }
          *(_BYTE *)(a1 + 16) = 1;
          if ( v27[0] )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          result = 0LL;
        }
        else
        {
          sub_180003AB0(
            retaddr,
            77,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
            v18);
          if ( v27[0] )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          result = v19;
        }
      }
      else
      {
        sub_180003AB0(
          retaddr,
          63,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          v8);
        if ( v27[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
        result = v9;
      }
    }
    else
    {
      sub_180003AB0(
        retaddr,
        60,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        v4);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_18000FA80(
                           retaddr,
                           111,
                           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                           v6);
  }
  return result;
}
