/*
 * XREFs of PackSysFx2List @ 0x180122608
 * Callers:
 *     GetPackedSysFx2List @ 0x18012245C (GetPackedSysFx2List.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x18006ADE0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18006AE48 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PackSysFx2List(__int64 a1, _DWORD *a2)
{
  int v5; // eax
  unsigned int v6; // ebx
  void *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp+10h] BYREF

  if ( dword_1801A0C34 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801A0C34);
    if ( dword_1801A0C34 == -1 )
    {
      xmmword_1801A0B00 = (__int128)GUID_6f64adc8_8211_11e2_8c70_2c27d7f001fa;
      dword_1801A0B10 = 2048;
      xmmword_1801A0B14 = (__int128)GUID_6f64adcc_8211_11e2_8c70_2c27d7f001fa;
      dword_1801A0B24 = 0x8000;
      xmmword_1801A0B28 = (__int128)GUID_6f64adcd_8211_11e2_8c70_2c27d7f001fa;
      dword_1801A0B38 = 0x10000;
      xmmword_1801A0B3C = (__int128)GUID_6f64adce_8211_11e2_8c70_2c27d7f001fa;
      dword_1801A0B4C = 0x20000;
      Init_thread_footer(&dword_1801A0C34);
    }
  }
  *a2 = 0;
  if ( !a1 )
    return 0LL;
  pv = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, &pv, &v13, 0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = pv;
    if ( v13 )
    {
      v8 = pv;
      v9 = v13;
      do
      {
        v10 = 0LL;
        while ( 1 )
        {
          v11 = *(_QWORD *)((char *)&xmmword_1801A0B00 + 20 * v10) - *v8;
          if ( !v11 )
            v11 = *(_QWORD *)((char *)&xmmword_1801A0B00 + 20 * v10 + 8) - v8[1];
          if ( !v11 )
            break;
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= 4 )
            goto LABEL_17;
        }
        *a2 |= *((_DWORD *)&xmmword_1801A0B00 + 5 * v10 + 4);
LABEL_17:
        v8 += 2;
        --v9;
      }
      while ( v9 );
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v5);
    v7 = pv;
  }
  CoTaskMemFree(v7);
  return v6;
}
