/*
 * XREFs of ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00839B8
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0083810 (NtDCompositionGetConnectionBatch.c)
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0083AD8 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetBatchesFromFrame(
        DirectComposition::CConnection *this,
        unsigned __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  __int64 v4; // rcx
  int Batches; // ebx
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD **v11; // rcx
  _QWORD *i; // r8
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v4 = *((_QWORD *)this + 23);
  Batches = -1073741275;
  if ( v4 )
    Batches = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, a2, &v14);
  if ( Batches >= 0 )
  {
    v8 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v8, 1u);
    if ( *((_DWORD *)this + 37) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) == 2 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 64LL))(v14);
        if ( v9 )
          v10 = *(_QWORD **)(v9 + 8);
        else
          v10 = 0LL;
        v11 = (_QWORD **)*((_QWORD *)this + 14);
        if ( v11 )
        {
          for ( i = *v11; i; i = (_QWORD *)*i )
            v11 = (_QWORD **)i;
          *v11 = v10;
        }
        else
        {
          *((_QWORD *)this + 14) = v10;
        }
        Batches = DirectComposition::CConnection::RetrieveBatches(this, a2, a3);
      }
      else
      {
        Batches = -1073740024;
      }
    }
    else
    {
      Batches = -1073741300;
    }
    ExReleaseResourceLite(*((PERESOURCE *)this + 1));
    KeLeaveCriticalRegion();
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  return (unsigned int)Batches;
}
