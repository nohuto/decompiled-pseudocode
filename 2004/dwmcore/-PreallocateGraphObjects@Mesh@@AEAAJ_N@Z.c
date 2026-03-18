/*
 * XREFs of ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x18009AC84
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180052A20 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x1801A2300 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800830F8 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x18009AE00 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 */

__int64 __fastcall Mesh::PreallocateGraphObjects(Mesh *this, char a2)
{
  int v2; // eax
  void *v4; // rcx
  int v5; // r14d
  Mesh::MeshGraph **v6; // rsi
  Mesh::MeshGraph *v7; // rcx
  __int64 v8; // rax
  SIZE_T v9; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v11; // rax
  void *v12; // rcx
  Mesh::MeshGraph *v13; // rcx
  int v14; // ebx
  Mesh::MeshGraph *v15; // rcx
  Mesh::MeshGraph *v16; // rax
  Mesh::MeshGraph *v18; // [rsp+30h] [rbp-20h] BYREF
  Mesh::MeshGraph **v19; // [rsp+38h] [rbp-18h]
  struct Mesh::MeshGraph *v20; // [rsp+40h] [rbp-10h] BYREF
  char v21; // [rsp+48h] [rbp-8h]

  v2 = *((_DWORD *)this + 2);
  v18 = 0LL;
  v4 = *(void **)this;
  v5 = v2 + 64;
  if ( !a2 )
    v5 = v2;
  *(_QWORD *)this = 0LL;
  if ( v4 )
    operator delete(v4);
  v6 = (Mesh::MeshGraph **)((char *)this + 16);
  *((_DWORD *)this + 2) = 0;
  v7 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v7 )
    Mesh::MeshGraph::`scalar deleting destructor'(v7);
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_DWORD *)(v8 + 32) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 88) = 0LL;
    *(_QWORD *)(v8 + 96) = 0LL;
    *(_DWORD *)(v8 + 104) = 0;
    *(_DWORD *)(v8 + 128) = 0;
  }
  v9 = 24LL * v5;
  if ( !is_mul_ok(v5, 0x18uLL) )
    v9 = -1LL;
  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, v9);
  v12 = *(void **)this;
  *(_QWORD *)this = v11;
  if ( v12 )
  {
    operator delete(v12);
    v11 = *(LPVOID *)this;
  }
  if ( v11 )
  {
    *((_DWORD *)this + 2) = v5;
    v19 = &v18;
    v20 = 0LL;
    v21 = 1;
    v14 = Mesh::MeshGraph::Create(v5, v5, 2 * v5, 0, &v20);
    if ( v21 )
    {
      v13 = *v19;
      *v19 = v20;
      if ( v13 )
        Mesh::MeshGraph::`scalar deleting destructor'(v13);
    }
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v14, 0x7Eu, 0LL);
    }
    else
    {
      if ( v6 != &v18 )
      {
        v15 = *v6;
        v16 = v18;
        v18 = 0LL;
        *v6 = v16;
        if ( v15 )
          Mesh::MeshGraph::`scalar deleting destructor'(v15);
      }
      v14 = 0;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, -2147024882, 0x7Au, 0LL);
  }
  if ( v18 )
    Mesh::MeshGraph::`scalar deleting destructor'(v18);
  return (unsigned int)v14;
}
