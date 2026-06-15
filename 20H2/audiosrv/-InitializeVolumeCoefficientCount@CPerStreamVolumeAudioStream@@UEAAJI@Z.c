/*
 * XREFs of ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x180035090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount(
        CPerStreamVolumeAudioStream *this,
        unsigned int a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rax
  void *v5; // rdi
  _QWORD *v6; // r14
  _DWORD *v7; // r15
  _DWORD *v8; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v10; // rax
  void *v11; // rdi
  void **v12; // rsi
  void *v13; // rbp
  unsigned __int64 v14; // rax
  void *v15; // rdi
  void **v16; // r14
  void *v17; // rbp
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  HANDLE ProcessHeap; // rax
  void *v22; // r8
  HANDLE v23; // rax
  void *v24; // r8
  __int64 v25; // rdx
  HANDLE v26; // rax
  void *v27; // r8
  int v28; // [rsp+20h] [rbp-28h]
  int v29; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v31; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  if ( *((_DWORD *)this + 23) == a2 )
    goto LABEL_11;
  v4 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v4 = -1LL;
  v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (_QWORD *)((char *)this + 440);
  if ( (char *)this + 440 == &v31 )
  {
    if ( !v5 )
      goto LABEL_6;
    ProcessHeap = GetProcessHeap();
    v22 = v5;
LABEL_29:
    HeapFree(ProcessHeap, 0, v22);
    goto LABEL_6;
  }
  v7 = (_DWORD *)*v6;
  *v6 = v5;
  if ( v7 )
  {
    ProcessHeap = GetProcessHeap();
    v22 = v7;
    goto LABEL_29;
  }
LABEL_6:
  v8 = (_DWORD *)*v6;
  if ( !*v6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x600,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL,
      v28);
    return 2147942414LL;
  }
  if ( (_DWORD)v3 )
  {
    for ( i = v3; i; --i )
      *v8++ = 1065353216;
  }
LABEL_11:
  if ( *((_DWORD *)this + 23) == (_DWORD)v3 )
    return 0LL;
  *((_DWORD *)this + 23) = v3;
  v10 = 4 * v3;
  if ( !is_mul_ok(v3, 4uLL) )
    v10 = -1LL;
  v11 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  v12 = (void **)((char *)this + 112);
  if ( (char *)this + 112 == &v31 )
  {
    if ( !v11 )
      goto LABEL_16;
    v23 = GetProcessHeap();
    v24 = v11;
  }
  else
  {
    v13 = *v12;
    *v12 = v11;
    if ( !v13 )
      goto LABEL_16;
    v23 = GetProcessHeap();
    v24 = v13;
  }
  HeapFree(v23, 0, v24);
LABEL_16:
  if ( *v12 )
  {
    v14 = 4LL * *((unsigned int *)this + 23);
    if ( !is_mul_ok(*((unsigned int *)this + 23), 4uLL) )
      v14 = -1LL;
    v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    v16 = (void **)((char *)this + 120);
    if ( (char *)this + 120 == &v31 )
    {
      if ( !v15 )
        goto LABEL_21;
      v26 = GetProcessHeap();
      v27 = v15;
    }
    else
    {
      v17 = *v16;
      *v16 = v15;
      if ( !v17 )
      {
LABEL_21:
        if ( *v16 )
        {
          v18 = 0LL;
          if ( *((_DWORD *)this + 23) )
          {
            v19 = *v12;
            do
            {
              v19[v18] = 1065353216;
              v18 = (unsigned int)(v18 + 1);
            }
            while ( (unsigned int)v18 < *((_DWORD *)this + 23) );
          }
          return 0LL;
        }
        v25 = 216LL;
        goto LABEL_41;
      }
      v26 = GetProcessHeap();
      v27 = v17;
    }
    HeapFree(v26, 0, v27);
    goto LABEL_21;
  }
  v25 = 214LL;
LABEL_41:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)0x8007000ELL,
    v28);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x608,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)0x8007000ELL,
    v29);
  return 2147942414LL;
}
