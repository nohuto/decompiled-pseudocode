/*
 * XREFs of ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x180052734
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180053820 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x1801A4FA8 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 */

__int64 __fastcall Mesh::GetGeometryCount(Mesh *this, char a2, char a3, int *a4, int *a5)
{
  char v5; // al
  int v10; // edi
  int v11; // ebp
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int *v15; // rdx
  int v16; // ecx
  unsigned int v17; // r8d
  __int64 v18; // rax
  int inited; // eax
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rdx
  int v23; // ecx
  _QWORD *i; // rcx
  __int64 v25; // r8
  int v26; // [rsp+30h] [rbp-58h] BYREF
  int v27; // [rsp+34h] [rbp-54h]
  int v28; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+3Ch] [rbp-4Ch]

  v5 = *((_BYTE *)this + 76);
  if ( (v5 & 1) != 0 )
  {
    v10 = *((_DWORD *)this + 3);
    v11 = 0;
    v12 = *((_QWORD *)this + 3);
    if ( !v12 || (v5 & 0x18) != 0 )
    {
      inited = Mesh::InitMeshGraph(this);
      v13 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, inited, 0xE55u, 0LL);
        return v13;
      }
      if ( a2 )
        v11 = 3
            * (*(_DWORD *)(*((_QWORD *)this + 2) + 100LL)
             + 2 * (*(_DWORD *)(*((_QWORD *)this + 2) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 2) + 104LL)));
      if ( a3 )
      {
        if ( (*((_BYTE *)this + 76) & 0x40) != 0 )
        {
          v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
          v22 = v21;
          if ( v21 )
          {
            do
            {
              if ( (*(_BYTE *)(v22 + 28) & 0xC) == 0xC )
              {
                v23 = *(_DWORD *)(v22 + 64);
                v11 = v11 + 6 * v23 - 6;
                v10 += v23 - 1;
                for ( i = *(_QWORD **)(v22 + 48); i; i = (_QWORD *)i[8] )
                {
                  if ( i[3] != i[4] )
                  {
                    if ( (v25 = *(_QWORD *)(v22 + 80), *i != **(_QWORD **)(v25 + 48)) && *i != **(_QWORD **)(v25 + 56)
                      || (*(_BYTE *)(v25 + 28) & 0xC) != 0xC )
                    {
                      ++v10;
                    }
                  }
                }
              }
              else if ( (*(_BYTE *)(*(_QWORD *)(v22 + 72) + 28LL) & 0xC) == 0xC )
              {
                ++v10;
              }
              v22 = *(_QWORD *)(v22 + 80);
            }
            while ( v22 != v21 && v22 );
          }
        }
      }
    }
    else
    {
      if ( a2 )
        v11 = *(_DWORD *)(v12 + 128);
      if ( a3 && (v5 & 0x40) != 0 )
      {
        v15 = &v26;
        v16 = *((_DWORD *)this + 12);
        v17 = 0;
        v27 = *((_DWORD *)this + 13);
        v29 = v27;
        v26 = v16;
        v28 = v16;
        do
        {
          if ( *(int *)((char *)v15 + this - (Mesh *)&v26 + 60) == 12 )
          {
            v11 = v11 + 6 * *v15 - 6;
            v10 = *v15 + v10 - 1;
          }
          else
          {
            v18 = 72LL;
            if ( v17 )
              v18 = (__int64)v15 + 56LL - (_QWORD)&v26;
            if ( *(_DWORD *)((char *)this + v18) == 12 )
              ++v10;
          }
          ++v17;
          ++v15;
        }
        while ( v17 < 4 );
      }
    }
    *a4 = v10;
    v13 = 0;
    *a5 = v11;
  }
  else
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0xE2Cu, 0LL);
  }
  return v13;
}
