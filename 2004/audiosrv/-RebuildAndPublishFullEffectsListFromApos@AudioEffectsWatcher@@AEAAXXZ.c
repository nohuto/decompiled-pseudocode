/*
 * XREFs of ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800C6310
 * Callers:
 *     ?EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800C5BD0 (-EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800C5DE0 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800BD2D0 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x1800BD2F8 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800C6678 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(AudioEffectsWatcher *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // r14d
  _DWORD *v4; // rsi
  _QWORD *v5; // r15
  unsigned int v6; // eax
  void *v7; // r9
  SIZE_T v8; // rsi
  void *v9; // rax
  unsigned __int64 v10; // rax
  char *v11; // r15
  unsigned int v12; // r14d
  _DWORD *v13; // rsi
  LPVOID *v14; // rdi
  SIZE_T cb; // [rsp+30h] [rbp-29h] BYREF
  __int128 v16; // [rsp+38h] [rbp-21h]
  __int128 v17; // [rsp+48h] [rbp-11h] BYREF
  _OWORD v18[3]; // [rsp+58h] [rbp-1h] BYREF

  memset(v18, 0, sizeof(v18));
  v16 = *(_OWORD *)((char *)this + 8);
  v17 = v16;
  EtwEventActivityIdControl(4LL, &v17);
  v2 = 0;
  do
  {
    ResetEvent(*((HANDLE *)this + 25));
    AudioEffectsWatcher::ReloadApos(this);
    *((_DWORD *)this + 56) = 0;
    v3 = 0;
    v4 = (_DWORD *)v18 + 2;
    v5 = (_QWORD *)((char *)this + 128);
    do
    {
      CoTaskMemFree(*((LPVOID *)v4 - 1));
      *((_QWORD *)v4 - 1) = 0LL;
      *v4 = 0;
      if ( *v5
        && (*(int (__fastcall **)(_QWORD, _OWORD *, char *, _QWORD))(*(_QWORD *)*v5 + 24LL))(
             *v5,
             &v18[v3],
             (char *)&v18[v3] + 8,
             *((_QWORD *)this + 25)) < 0 )
      {
        *v4 = 0;
      }
      *((_DWORD *)this + 56) += *v4;
      ++v3;
      v5 += 4;
      v4 += 4;
    }
    while ( v3 < 3 );
  }
  while ( !WaitForSingleObject(*((HANDLE *)this + 25), 0) );
  v6 = *((_DWORD *)this + 56);
  if ( v6 )
  {
    *((_QWORD *)this + 27) = 0LL;
    if ( (int)ULongLongMult(v6, 0x10uLL, &cb) < 0 )
      goto LABEL_18;
    v8 = cb;
    v9 = CoTaskMemRealloc(v7, cb);
    *((_QWORD *)this + 27) = v9;
    if ( !v9 )
      goto LABEL_18;
    v10 = CTCoAllocPolicy::_CoTaskMemSize(v9);
    if ( v10 > v8 )
      memset_0((void *)(v8 + *((_QWORD *)this + 27)), 0, v10 - v8);
  }
  v11 = (char *)*((_QWORD *)this + 27);
  v12 = 0;
  v13 = (_DWORD *)v18 + 2;
  do
  {
    if ( *v13 )
    {
      memcpy_0(v11, *((const void **)v13 - 1), 16LL * (unsigned int)*v13);
      v11 += 16 * (unsigned int)*v13;
    }
    ++v12;
    v13 += 4;
  }
  while ( v12 < 3 );
  RtlPublishWnfStateData(
    *(_QWORD *)((char *)this + 92),
    0LL,
    *((_QWORD *)this + 27),
    (unsigned int)(16 * *((_DWORD *)this + 56)),
    0LL);
LABEL_18:
  v14 = (LPVOID *)v18;
  do
  {
    CoTaskMemFree(*v14);
    ++v2;
    v14 += 2;
  }
  while ( v2 < 3 );
  EtwEventActivityIdControl(4LL, &v17);
}
