/*
 * XREFs of ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x1800018C8
 * Callers:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x180001800 (-SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetAllStreamVolumes(CAudioStream *this, unsigned int a2, float *a3, int *a4)
{
  int v6; // ebx
  unsigned int v7; // eax
  float *v8; // rcx
  int v9; // edi
  float *v10; // rax
  char *v11; // r8
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != *((_DWORD *)this + 23) )
  {
    v15 = 934LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL,
      v16);
    return 2147942487LL;
  }
  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    v8 = a3;
    while ( *v8 >= 0.0 && *v8 <= 1.0 )
    {
      ++v7;
      ++v8;
      if ( v7 >= a2 )
        goto LABEL_7;
    }
    v15 = 938LL;
    goto LABEL_17;
  }
LABEL_7:
  v9 = 0;
  if ( a2 )
  {
    v10 = (float *)*((_QWORD *)this + 14);
    v11 = (char *)((char *)a3 - (char *)v10);
    v12 = a2;
    do
    {
      v13 = *(float *)((char *)v10 + (_QWORD)v11);
      if ( *v10 != v13 )
      {
        *v10 = v13;
        ++v9;
      }
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  (*(void (__fastcall **)(CAudioStream *, _QWORD, _QWORD))(*(_QWORD *)this + 120LL))(this, 0LL, 0LL);
  if ( a4 )
  {
    LOBYTE(v6) = v9 == 0;
    *a4 = v6;
  }
  return 0LL;
}
