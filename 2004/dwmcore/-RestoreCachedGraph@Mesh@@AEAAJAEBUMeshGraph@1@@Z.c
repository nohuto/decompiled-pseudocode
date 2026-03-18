/*
 * XREFs of ?RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z @ 0x1801A2620
 * Callers:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x1801A2408 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800BF420 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::RestoreCachedGraph(struct Mesh::MeshGraph **this, const struct Mesh::MeshGraph *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct Mesh::MeshGraph *v7; // rax
  int v8; // r10d
  unsigned __int64 v9; // r8
  __int64 v10; // r9

  v3 = Mesh::CopyGraph(a2, this[2]);
  v6 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v3, 0x49Du, 0LL);
  }
  else
  {
    v7 = this[2];
    v8 = 0;
    if ( *((int *)v7 + 14) > 0 )
    {
      v9 = 0LL;
      v10 = 0LL;
      do
      {
        if ( v9 >= *((_QWORD *)v7 + 5) )
        {
          ((void (__fastcall *)(__int64, __int64, unsigned __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
            v5,
            v4,
            v9,
            v10);
          __debugbreak();
        }
        v4 = *((_QWORD *)v7 + 6);
        ++v8;
        ++v9;
        v5 = **(_QWORD **)(v10 + v4 + 48);
        *(_QWORD *)(v10 + v4 + 8) = **(_QWORD **)(v5 + 8);
        v10 += 88LL;
        v7 = this[2];
      }
      while ( v8 < *((_DWORD *)v7 + 14) );
    }
    return 0;
  }
  return v6;
}
