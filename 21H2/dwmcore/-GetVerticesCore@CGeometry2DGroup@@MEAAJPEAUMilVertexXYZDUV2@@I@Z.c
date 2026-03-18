/*
 * XREFs of ?GetVerticesCore@CGeometry2DGroup@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x180207EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetVerticesCore(
        CGeometry2DGroup *this,
        struct MilVertexXYZDUV2 *a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // esi
  __int64 i; // rdi
  __int64 v9; // r14
  unsigned int v10; // r12d
  int v11; // eax
  __int64 v12; // rcx

  v3 = *((_DWORD *)this + 8);
  v4 = 0;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i);
      if ( v9 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 184LL))(v9);
        v11 = (*(__int64 (__fastcall **)(__int64, struct MilVertexXYZDUV2 *, _QWORD))(*(_QWORD *)v9 + 224LL))(
                v9,
                a2,
                a3);
        v4 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x1C3u);
          break;
        }
        a2 = (struct MilVertexXYZDUV2 *)((char *)a2 + 32 * v10);
        a3 -= v10;
      }
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v4;
}
