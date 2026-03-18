/*
 * XREFs of ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800378C0
 * Callers:
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x180037740 (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180058CC0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??0MeshLine@Mesh@@QEAA@XZ @ 0x1800DCD14 (--0MeshLine@Mesh@@QEAA@XZ.c)
 *     ??0MeshVertex@Mesh@@QEAA@XZ @ 0x1800DCD2C (--0MeshVertex@Mesh@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Mesh::MeshGraph::Create(int a1, int a2, int a3, int a4, struct Mesh::MeshGraph **a5)
{
  void *v5; // rsi
  void *v6; // rbp
  unsigned __int64 v7; // r12
  void *v8; // r15
  unsigned __int64 v9; // r13
  void *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rbx
  SIZE_T v13; // rdi
  HANDLE ProcessHeap; // rax
  LPVOID v15; // rax
  Mesh::MeshVertex *v16; // rdi
  SIZE_T v17; // rbx
  HANDLE v18; // rax
  LPVOID v19; // rax
  Mesh::MeshLine *v20; // rbx
  SIZE_T v21; // rbx
  HANDLE v22; // rax
  __int64 v23; // rcx
  HANDLE v24; // rax
  _QWORD *v25; // rcx
  unsigned int v26; // ebx
  void *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = a4;
  v8 = 0LL;
  v9 = a3;
  v10 = 0LL;
  LODWORD(v11) = a2;
  if ( a1 > 0 )
  {
    v12 = a1;
    v13 = (__int64)a1 << 6;
    if ( !is_mul_ok(a1, 0x40uLL) )
      v13 = -1LL;
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 0, v13);
    v5 = v15;
    if ( !v15 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v16 = (Mesh::MeshVertex *)v15;
    do
    {
      Mesh::MeshVertex::MeshVertex(v16);
      v16 = (Mesh::MeshVertex *)((char *)v16 + 64);
      --v12;
    }
    while ( v12 );
    LODWORD(v11) = a2;
  }
  if ( (int)v11 > 0 )
  {
    v11 = (int)v11;
    v17 = 88LL * (int)v11;
    if ( !is_mul_ok((int)v11, 0x58uLL) )
      v17 = -1LL;
    v18 = GetProcessHeap();
    v19 = HeapAlloc(v18, 0, v17);
    v6 = v19;
    if ( !v19 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v20 = (Mesh::MeshLine *)v19;
    do
    {
      Mesh::MeshLine::MeshLine(v20);
      v20 = (Mesh::MeshLine *)((char *)v20 + 88);
      --v11;
    }
    while ( v11 );
    LODWORD(v11) = a2;
  }
  if ( (int)v9 > 0 )
  {
    v21 = 88 * v9;
    if ( !is_mul_ok(v9, 0x58uLL) )
      v21 = -1LL;
    v22 = GetProcessHeap();
    v8 = HeapAlloc(v22, 0, v21);
    if ( !v8 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  if ( (int)v7 <= 0 || (v10 = operator new(saturated_mul(v7, 2uLL))) != 0LL )
  {
    v24 = GetProcessHeap();
    v25 = HeapAlloc(v24, 0, 0x88uLL);
    if ( !v25 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v25[2] = a1;
    if ( a1 < 0LL
      || (v25[3] = v5) == 0LL && a1
      || (v25[5] = (int)v11, (int)v11 < 0)
      || (v25[6] = v6) == 0LL && (_DWORD)v11
      || (v25[9] = v9, (v9 & 0x80000000) != 0LL)
      || (v25[10] = v8) == 0LL && (_DWORD)v9
      || (v25[14] = v7, (v7 & 0x80000000) != 0LL)
      || (v25[15] = v10) == 0LL && (_DWORD)v7 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v25[8] = 0LL;
    v26 = 0;
    *((_DWORD *)v25 + 8) = 0;
    *((_DWORD *)v25 + 14) = 0;
    v25[11] = 0LL;
    v25[12] = 0LL;
    *((_DWORD *)v25 + 26) = 0;
    *((_DWORD *)v25 + 32) = 0;
    *a5 = (struct Mesh::MeshGraph *)v25;
  }
  else
  {
    v26 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024882, 0x11F4u, 0LL);
    operator delete(v5);
    operator delete(v6);
    operator delete(v8);
    operator delete(0LL);
  }
  return v26;
}
