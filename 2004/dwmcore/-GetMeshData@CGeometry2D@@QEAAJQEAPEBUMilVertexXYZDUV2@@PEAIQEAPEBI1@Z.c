/*
 * XREFs of ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1801B5EBC
 * Callers:
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18018F460 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1801B5E88 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2D::GetMeshData(
        CGeometry2D *this,
        const struct MilVertexXYZDUV2 **const a2,
        unsigned int *a3,
        const unsigned int **const a4,
        unsigned int *a5)
{
  int v5; // ebx
  unsigned __int64 v10; // rbx
  LPVOID v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  LPVOID v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-28h]

  v5 = 0;
  if ( !*((_QWORD *)this + 7) )
  {
    v10 = (*(unsigned int (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 200LL))(this);
    v11 = DefaultHeap::Alloc(saturated_mul(v10, 0x20uLL));
    *((_QWORD *)this + 7) = v11;
    if ( !v11 )
    {
      v20 = 44;
LABEL_4:
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, v20, 0LL);
LABEL_13:
      CGeometry2D::FreeCaches((void **)this);
      return (unsigned int)v5;
    }
    v13 = (*(__int64 (__fastcall **)(CGeometry2D *, LPVOID, _QWORD))(*(_QWORD *)this + 240LL))(
            this,
            v11,
            (unsigned int)v10);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2Du, 0LL);
      goto LABEL_12;
    }
    v15 = (*(unsigned int (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 208LL))(this);
    v16 = DefaultHeap::Alloc(saturated_mul(v15, 4uLL));
    *((_QWORD *)this + 8) = v16;
    if ( !v16 )
    {
      v20 = 51;
      goto LABEL_4;
    }
    v17 = (*(__int64 (__fastcall **)(CGeometry2D *, _QWORD, LPVOID, _QWORD))(*(_QWORD *)this + 232LL))(
            this,
            0LL,
            v16,
            (unsigned int)v15);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x34u, 0LL);
      goto LABEL_12;
    }
  }
  *a2 = (const struct MilVertexXYZDUV2 *)*((_QWORD *)this + 7);
  *a3 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 200LL))(this);
  *a4 = (const unsigned int *)*((_QWORD *)this + 8);
  *a5 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 208LL))(this);
LABEL_12:
  if ( v5 < 0 )
    goto LABEL_13;
  return (unsigned int)v5;
}
