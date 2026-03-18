/*
 * XREFs of ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x180023144
 * Callers:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x1800125C8 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180017704 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180022800 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180022800.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180022B14 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180022DD4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180022DD4.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A8F08 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801A8F08.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A9470 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801A9470.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall DirectX::PackedVector::XMConvertFloatToHalf(DirectX::PackedVector *this, float a2)
{
  int v2; // xmm0_4
  unsigned int v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // edx

  v3 = v2 & 0x7FFFFFFF;
  if ( (v2 & 0x7FFFFFFFu) > 0x477FE000 )
  {
    v4 = (v2 & 0x7FFFFF) != 0 && (v2 & 0x7F800000) == 2139095040 ? 0x7FFF : 31744;
  }
  else
  {
    LOWORD(v4) = 0;
    if ( v3 )
    {
      if ( v3 < 0x38800000 )
        v5 = (v2 & 0x7FFFFF | 0x800000u) >> (113 - (v3 >> 23));
      else
        v5 = v3 - 939524096;
      v4 = ((((v5 >> 13) & 1) + v5 + 4095) >> 13) & 0x7FFF;
    }
  }
  return HIWORD(v2) & 0x8000 | v4;
}
