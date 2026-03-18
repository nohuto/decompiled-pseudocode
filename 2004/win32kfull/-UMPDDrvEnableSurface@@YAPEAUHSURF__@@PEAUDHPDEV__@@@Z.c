/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C01509E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00EE8FC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00EEB38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00EF148 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C00EF3DC (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  UMPDOBJ *v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  UMPDOBJ *v7; // rcx
  __int64 v8; // r10
  size_t Size; // [rsp+20h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v12; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h]

  v11 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v12);
  v2 = v12;
  v13 = 0LL;
  v14 = 0LL;
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0x300000020LL;
    *(_QWORD *)&v14 = *(_QWORD *)v12;
    *((_QWORD *)&v14 + 1) = a1;
    LODWORD(Size) = 8;
    v3 = UMPDOBJ::Thunk(v12, &v13, 0x20u, &v11, Size);
    v5 = v11;
    if ( v3 == -1 )
      v5 = 0LL;
    if ( v5 )
    {
      LOBYTE(v4) = 5;
      v6 = HmgShareLockCheck(v5, v4);
      v8 = v6;
      if ( v6 )
      {
        if ( *(_WORD *)(v6 + 100) == 1 && (*(_BYTE *)(v6 + 112) & 0x29) != 0x29 )
          v5 = 0LL;
        if ( (*(_DWORD *)(v6 + 112) & 0x4000000) != 0 )
          v5 = 0LL;
        if ( *((_DWORD *)v2 + 106) )
          UMPDOBJ::vClient(v7, (_QWORD *)(v6 + 24));
      }
      else
      {
        v5 = 0LL;
      }
      if ( v8 )
        DEC_SHARE_REF_CNT(v8);
    }
  }
  else
  {
    v5 = 0LL;
  }
  XUMPDOBJ::~XUMPDOBJ(&v12);
  return v5;
}
