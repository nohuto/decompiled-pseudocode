/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C0217E28
 * Callers:
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C0217D04 (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1C0217DA0 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

void __fastcall DXGSESSIONDATA::FinishPnPTransitionOnSession(
        DXGSESSIONDATA *this,
        struct _PNP_TRANS_TOKEN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  struct _PNP_TRANS_TOKEN *v6; // r14
  DXGSESSIONDATA *v7; // rdi
  char v8; // si
  char v9; // bp
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  char v16; // dl
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v4 = *((unsigned int *)this + 4690);
  v5 = 0;
  v6 = a2;
  v7 = this;
  v8 = 1;
  if ( (_DWORD)v4 )
  {
    a2 = (struct _PNP_TRANS_TOKEN *)*((_QWORD *)this + 2346);
    do
    {
      this = (DXGSESSIONDATA *)*((_QWORD *)a2 + 4 * v5 + 1);
      if ( this )
      {
        if ( this == v6 )
          break;
        v8 = 0;
      }
      ++v5;
    }
    while ( v5 < (unsigned int)v4 );
  }
  if ( *((_QWORD *)v7 + 2316) )
  {
    v9 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    CurrentProcess = PsGetCurrentProcess(this, a2, v4, a4);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != *(_DWORD *)v7 )
    {
      v9 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)v7 + 2331), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)v7 + 2316));
    if ( v9 )
      KeUnstackDetachProcess(&ApcState);
  }
  if ( v5 < *((_DWORD *)v7 + 4690) )
  {
    v11 = 32LL * v5;
    *(_QWORD *)(v11 + *((_QWORD *)v7 + 2346) + 8) = 0LL;
    v12 = (_QWORD *)(v11 + *((_QWORD *)v7 + 2346) + 16LL);
    v13 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    --*((_DWORD *)v6 + 1);
    if ( *((_QWORD *)v7 + 2344) )
    {
      v15 = v5 + 1;
      if ( v8 )
      {
        while ( 1 )
        {
          v16 = 0;
          if ( v15 >= *((_DWORD *)v7 + 4690) )
            break;
          if ( !*(_QWORD *)(32LL * v15 + *((_QWORD *)v7 + 2346) + 8) )
            v16 = v8;
          ++v15;
          v8 = v16;
          if ( !v16 )
            return;
        }
        KeSetEvent(*((PRKEVENT *)v7 + 2344), 0, 0);
      }
    }
  }
}
