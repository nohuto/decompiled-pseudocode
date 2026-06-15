/*
 * XREFs of ?SerializeProcessingModeCharacteristics@@YAJPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAKPEAPEAE@Z @ 0x18011EDDC
 * Callers:
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18011FCB4 (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 * Callees:
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18004BAE4 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800BB754 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SerializeProcessingModeCharacteristics(int *a1, unsigned int *a2, _QWORD *a3)
{
  int *v3; // r15
  unsigned int v4; // ebp
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // r14
  signed int i; // esi
  int v9; // edi
  _DWORD *v10; // rbx
  unsigned int v11; // esi
  char *v12; // r14
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned int v16; // esi
  signed int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  const void **v20; // r12
  int v21; // eax
  unsigned int v22; // esi
  _DWORD *v23; // r14
  unsigned int v24; // esi
  _DWORD *v25; // r14
  unsigned int v26; // esi
  _DWORD *v27; // r14
  unsigned int v28; // esi
  _DWORD *v29; // r14
  unsigned int v30; // esi
  char *v31; // r14
  size_t v32; // r8
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v36; // [rsp+20h] [rbp-58h]
  LPVOID pv; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v38; // [rsp+88h] [rbp+10h]
  _QWORD *v39; // [rsp+90h] [rbp+18h]
  int v40; // [rsp+98h] [rbp+20h]

  v39 = a3;
  v38 = a2;
  v3 = a1;
  pv = 0LL;
  v4 = 8;
  v5 = 0;
  if ( a1[2] > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v6 + *(_QWORD *)v3);
      v4 += 20;
      for ( i = 0; i < *(_DWORD *)(v7 + 24); ++i )
      {
        a1 = (int *)*(unsigned __int16 *)(**(_QWORD **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                         v7 + 16,
                                                         i)
                                        + 16LL);
        v4 += (_DWORD)a1 + 38;
      }
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < v3[2] );
  }
  v9 = CTCoAllocPolicy::Alloc(a1, 1, v4, &pv);
  v10 = pv;
  if ( v9 >= 0 )
  {
    if ( v4 >= 4 )
    {
      *(_DWORD *)pv = 10;
      if ( v4 - 4 >= 4 )
      {
        v10[1] = v3[2];
        v11 = v4 - 8;
        v12 = (char *)(v10 + 2);
        v13 = 0;
        v40 = 0;
        if ( v3[2] <= 0 )
        {
LABEL_25:
          *v38 = v4;
          v34 = v10;
          v10 = 0LL;
          *v39 = v34;
          goto LABEL_26;
        }
        v14 = 0LL;
        v36 = 0LL;
        while ( 1 )
        {
          v15 = *(_QWORD *)(v14 + *(_QWORD *)v3);
          if ( v11 < 0x10 )
            break;
          *(_OWORD *)v12 = *(_OWORD *)v15;
          v16 = v11 - 16;
          if ( v16 < 4 )
            break;
          *((_DWORD *)v12 + 4) = *(_DWORD *)(v15 + 24);
          v11 = v16 - 4;
          v12 += 20;
          v17 = 0;
          LODWORD(pv) = 0;
          if ( *(int *)(v15 + 24) > 0 )
          {
            v18 = v15 + 16;
            while ( 1 )
            {
              v19 = ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                      v18,
                      v17);
              v20 = *(const void ***)v19;
              v21 = *(_DWORD *)(*(_QWORD *)v19 + 8LL);
              if ( v11 < 4 )
                goto LABEL_8;
              *(_DWORD *)v12 = v21;
              v22 = v11 - 4;
              v23 = v12 + 4;
              if ( v22 < 4 )
                goto LABEL_8;
              *v23 = *((_DWORD *)v20 + 3);
              v24 = v22 - 4;
              v25 = v23 + 1;
              if ( v24 < 4 )
                goto LABEL_8;
              *v25 = *((_DWORD *)v20 + 4);
              v26 = v24 - 4;
              v27 = v25 + 1;
              if ( v26 < 4 )
                goto LABEL_8;
              *v27 = *((_DWORD *)v20 + 5);
              v28 = v26 - 4;
              v29 = v27 + 1;
              if ( v28 < 4 )
                goto LABEL_8;
              *v29 = *((_DWORD *)v20 + 6);
              v30 = v28 - 4;
              v31 = (char *)(v29 + 1);
              v32 = *((unsigned __int16 *)*v20 + 8) + 18LL;
              if ( v30 < v32 )
                goto LABEL_8;
              memcpy_0(v31, *v20, v32);
              v33 = *((unsigned __int16 *)*v20 + 8);
              v11 = -18 - v33 + v30;
              v12 = &v31[v33 + 18];
              v17 = (_DWORD)pv + 1;
              LODWORD(pv) = v17;
              v18 = v15 + 16;
              if ( v17 >= *(_DWORD *)(v15 + 24) )
              {
                v14 = v36;
                v13 = v40;
                break;
              }
            }
          }
          v40 = ++v13;
          v14 += 8LL;
          v36 = v14;
          if ( v13 >= v3[2] )
            goto LABEL_25;
        }
      }
    }
LABEL_8:
    v9 = -2147024774;
  }
LABEL_26:
  CoTaskMemFree(v10);
  return (unsigned int)v9;
}
