/*
 * XREFs of PropertyGetDbBasicSupport @ 0x1C0029530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetDbBasicSupport(IRP *a1, __int64 a2, __int64 a3)
{
  PKSFILTER FilterFromIrp; // rax
  unsigned int v7; // r11d
  unsigned int v8; // r8d
  unsigned int Length; // r10d
  __int64 v10; // r9
  unsigned int v11; // esi
  ULONG_PTR v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rbx
  unsigned int v15; // r10d
  _OWORD *v16; // rbp
  _OWORD *v17; // r15
  _QWORD *v18; // r13
  __int64 v19; // r11
  int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // r14
  __int64 v23; // rcx

  FilterFromIrp = KsGetFilterFromIrp(a1);
  v7 = -1073741811;
  v8 = 1;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( FilterFromIrp )
  {
    v10 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
    v11 = *(_DWORD *)(v10 + 92);
    if ( *(_DWORD *)(a2 + 16) == 18 )
      v8 = *(_DWORD *)(*(_QWORD *)(v10 + 128) + 12LL);
    v12 = 16 * v11 * (v8 + 1) + 40;
    if ( Length >= 4 )
    {
      v7 = 0;
      a1->IoStatus.Information = 4LL;
      *(_DWORD *)a3 = 515;
      if ( Length >= 0x28 )
      {
        *(_DWORD *)(a3 + 28) = 0;
        *(_DWORD *)(a3 + 36) = 0;
        *(_DWORD *)(a3 + 4) = v12;
        *(_DWORD *)(a3 + 24) = 3;
        *(_DWORD *)(a3 + 32) = v11;
        *(GUID *)(a3 + 8) = KSPROPTYPESETID_General;
        a1->IoStatus.Information = 40LL;
        if ( Length >= (unsigned int)v12 )
        {
          v13 = *(_QWORD *)(v10 + 128);
          v14 = (_DWORD *)(a3 + 40);
          v15 = 0;
          a1->IoStatus.Information = v12;
          v16 = v14 + 4;
          if ( v11 )
          {
            v17 = (_OWORD *)(v13 + 16);
            v18 = (_QWORD *)(v13 + 32);
            v19 = v8;
            do
            {
              *v14 = 2;
              v14[1] = 16;
              v14[2] = v8;
              v14[3] = 2;
              v20 = *(_DWORD *)(v10 + 96);
              if ( _bittest(&v20, v15) )
              {
                if ( *(_DWORD *)(a2 + 16) == 18 )
                {
                  v21 = 0;
                  if ( v8 )
                  {
                    v22 = 0LL;
                    do
                    {
                      v23 = v8 * v15 + v21;
                      v22 += 20LL;
                      ++v21;
                      v16[v23] = *(_OWORD *)(v22 + *v18 - 16);
                    }
                    while ( v21 < v8 );
                  }
                }
                else
                {
                  *v16 = *v17;
                }
              }
              ++v15;
              v14 = &v16[v19];
              v18 += 5;
              v16 = (_OWORD *)((char *)v16 + v19 * 16 + 16);
              v17 += 2;
            }
            while ( v15 < v11 );
            return 0;
          }
        }
      }
    }
    else
    {
      a1->IoStatus.Information = v12;
      return (unsigned int)-1073741789;
    }
  }
  return v7;
}
