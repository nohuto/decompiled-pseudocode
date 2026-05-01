/*
 * XREFs of ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x180368AE0
 * Callers:
 *     ?IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x180368AAC (-IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 *     ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEA_N@Z @ 0x18036A780 (-VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsViewShown(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // r9
  _QWORD *Ptr; // r8
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // rax
  char v12; // di
  int v14; // [rsp+38h] [rbp+10h]

  v14 = a2;
  v4 = this + 55;
  AcquireSRWLockShared(this + 55);
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)&v14 + i) ^ (unsigned __int64)v5);
  v7 = 2 * (v5 & (__int64)this[53].Ptr);
  Ptr = this[50].Ptr;
  v9 = (_DWORD *)Ptr[v7];
  v10 = this[48].Ptr;
  while ( 1 )
  {
    v11 = (_DWORD *)Ptr[v7] == v10 ? this[48].Ptr : *(_DWORD **)Ptr[v7 + 1];
    if ( v9 == v11 )
      break;
    if ( v9[4] == a2 )
      goto LABEL_11;
    v9 = *(_DWORD **)v9;
  }
  v9 = this[48].Ptr;
LABEL_11:
  if ( v9 == v10 )
  {
    if ( v4 )
      ReleaseSRWLockShared(v4);
    return 0;
  }
  else
  {
    v12 = *((_BYTE *)v9 + 20);
    if ( v4 )
      ReleaseSRWLockShared(v4);
    return v12;
  }
}
