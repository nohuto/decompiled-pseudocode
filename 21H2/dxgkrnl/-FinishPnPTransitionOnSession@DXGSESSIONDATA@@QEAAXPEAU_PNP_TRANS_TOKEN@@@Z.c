/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C019C888
 * Callers:
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C019C764 (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1C019C800 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 */

void __fastcall DXGSESSIONDATA::FinishPnPTransitionOnSession(DXGSESSIONDATA *this, struct _PNP_TRANS_TOKEN *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  struct _PNP_TRANS_TOKEN *v4; // r14
  DXGSESSIONDATA *v5; // rdi
  char v6; // si
  char v7; // bp
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  struct _KEVENT *v13; // rcx
  unsigned int v14; // ebx
  char v15; // r8
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v2 = *((_DWORD *)this + 4684);
  v3 = 0;
  v4 = a2;
  v5 = this;
  v6 = 1;
  if ( v2 )
  {
    a2 = (struct _PNP_TRANS_TOKEN *)*((_QWORD *)this + 2343);
    do
    {
      this = (DXGSESSIONDATA *)*((_QWORD *)a2 + 4 * v3 + 1);
      if ( this )
      {
        if ( this == v4 )
          break;
        v6 = 0;
      }
      ++v3;
    }
    while ( v3 < v2 );
  }
  if ( *((_QWORD *)v5 + 2314) )
  {
    v7 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    CurrentProcess = PsGetCurrentProcess(this, a2);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != *(_DWORD *)v5 )
    {
      v7 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)v5 + 2329), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)v5 + 2314));
    if ( v7 )
      KeUnstackDetachProcess(&ApcState);
  }
  if ( v3 < *((_DWORD *)v5 + 4684) )
  {
    v9 = 32LL * v3;
    *(_QWORD *)(v9 + *((_QWORD *)v5 + 2343) + 8) = 0LL;
    v10 = (_QWORD *)(v9 + *((_QWORD *)v5 + 2343) + 16LL);
    v11 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    --*((_DWORD *)v4 + 1);
    v13 = (struct _KEVENT *)*((_QWORD *)v5 + 2341);
    if ( v13 )
    {
      v14 = v3 + 1;
      if ( v6 )
      {
        do
        {
          if ( v14 >= *((_DWORD *)v5 + 4684) )
            break;
          v15 = 0;
          if ( !*(_QWORD *)(32LL * v14 + *((_QWORD *)v5 + 2343) + 8) )
            v15 = v6;
          ++v14;
          v6 = v15;
        }
        while ( v15 );
        if ( v6 )
          KeSetEvent(v13, 0, 0);
      }
    }
  }
}
