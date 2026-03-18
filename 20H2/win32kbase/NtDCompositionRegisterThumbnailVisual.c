/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x1C0003570
 * Callers:
 *     <none>
 * Callees:
 *     GreLockDwmState @ 0x1C005E790 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C005E7D0 (GreUnlockDwmState.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0066E10 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C0067000 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0094F24 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?IsValidRect@@YA_NAEBUtagRECT@@@Z @ 0x1C00B51BC (-IsValidRect@@YA_NAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionRegisterThumbnailVisual(
        void *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        unsigned __int64 a8,
        void *a9)
{
  char v9; // r15
  __int64 *v11; // rbx
  void *v12; // r10
  int v13; // edi
  int v14; // esi
  __int64 v15; // rbx
  __int128 *v16; // rcx
  __int128 *v17; // rcx
  __int16 v18; // r8
  CompositionObject *v19; // r14
  int v20; // esi
  unsigned int v21; // r15d
  PVOID v22; // r12
  __int64 v23; // rcx
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  __int128 v30; // [rsp+78h] [rbp-90h]
  __int128 v31; // [rsp+88h] [rbp-80h]
  _DWORD v32[12]; // [rsp+98h] [rbp-70h] BYREF

  v9 = a3;
  v27 = a2;
  Object = a1;
  v28 = a2;
  v11 = (__int64 *)a8;
  v12 = a9;
  v29 = (__int64)a9;
  v13 = 0;
  v14 = 0;
  v26 = 0LL;
  memset(v32, 0, 45);
  if ( a8 + 8 < a8 || a8 + 8 > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  v15 = *v11;
  v26 = v15;
  v32[0] = a4;
  v16 = (__int128 *)a5;
  if ( a5 + 16 < a5 || a5 + 16 > MmUserProbeAddress )
    v16 = (__int128 *)MmUserProbeAddress;
  v30 = *v16;
  *(_OWORD *)&v32[1] = v30;
  v17 = (__int128 *)a6;
  if ( a6 + 16 < a6 || a6 + 16 > MmUserProbeAddress )
    v17 = (__int128 *)MmUserProbeAddress;
  v31 = *v17;
  *(_OWORD *)&v32[5] = v31;
  LOBYTE(v32[9]) = a7;
  *(_DWORD *)((char *)&v32[9] + 1) = (a3 >> 2) & 1;
  *(_DWORD *)((char *)&v32[10] + 1) = (a3 >> 3) & 1;
  if ( (v32[0] & 9) != 9
    || (v32[0] & 2) != 0 && !IsValidRect((const struct tagRECT *)&v32[5])
    || !IsValidRect((const struct tagRECT *)&v32[1])
    || v32[1]
    || v32[2]
    || (_WORD)a1 == v18 )
  {
    v14 = -1073741811;
  }
  if ( v14 >= 0 )
  {
    Object = 0LL;
    v14 = DirectComposition::ResourceObject::ResolveHandle(
            v12,
            1u,
            1,
            (struct DirectComposition::ResourceObject **)&Object);
    if ( v14 >= 0 )
    {
      v19 = (CompositionObject *)Object;
      if ( *((_DWORD *)Object + 9) == 195 )
      {
        GreLockDwmState();
        Object = 0LL;
        v14 = CompositionObject::OpenDwmHandle(v19, &Object);
        if ( v14 >= 0 )
        {
          v20 = v9 & 2;
          v21 = v9 & 1;
          v22 = Object;
          v23 = UserReferenceDwmApiPort();
          if ( qword_1C024F9D0 )
          {
            LOBYTE(v13) = v20 != 0;
            v14 = qword_1C024F9D0(v23, a1, v27, v21, v13, v32, v15, v22);
          }
          else
          {
            v14 = -1073741637;
          }
        }
        GreUnlockDwmState();
      }
      else
      {
        v14 = -1073741811;
      }
      ObfDereferenceObject(v19);
    }
  }
  return (unsigned int)v14;
}
