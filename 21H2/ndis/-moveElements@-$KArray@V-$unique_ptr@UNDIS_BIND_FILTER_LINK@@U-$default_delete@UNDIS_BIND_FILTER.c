/*
 * XREFs of ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C0100838
 * Callers:
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C0102738 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C01046E4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0026AB4 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 */

NDIS_BIND_LINK_BASE **__fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  NDIS_BIND_LINK_BASE **result; // rax
  unsigned int v9; // esi
  unsigned int v10; // r12d
  __int64 i; // r8
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned int v18; // ebx
  unsigned int v19; // esi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r14d
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rdi
  __int64 v31; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  if ( a2 != a3 )
  {
    result = (NDIS_BIND_LINK_BASE **)&retaddr;
    if ( a4 )
    {
      if ( a2 >= a3 )
      {
        v18 = a3;
        v19 = a2 - a3;
        if ( a3 < a2 )
        {
          v20 = 8LL * a3;
          do
          {
            v21 = *(_QWORD *)(a1 + 8);
            v22 = v18 + v19;
            v23 = v22;
            ++v18;
            result = *(NDIS_BIND_LINK_BASE ***)(v21 + 8 * v22);
            *(_QWORD *)(v21 + 8 * v23) = 0LL;
            *(_QWORD *)(v20 + v21) = result;
            v20 += 8LL;
          }
          while ( v18 < a2 );
        }
        v24 = a4 + a3;
        if ( v18 < v24 )
        {
          v25 = 8LL * v18;
          do
          {
            wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8LL * v18));
            v26 = *(_QWORD *)(a1 + 8);
            v27 = v18 + v19;
            v28 = v27;
            ++v18;
            result = *(NDIS_BIND_LINK_BASE ***)(v26 + 8 * v27);
            *(_QWORD *)(v26 + 8 * v28) = 0LL;
            *(_QWORD *)(v25 + v26) = result;
            v25 += 8LL;
          }
          while ( v18 < v24 );
        }
        v29 = a2 + a4;
        if ( v18 < a2 + a4 )
        {
          v30 = 8LL * v18;
          v31 = v29 - v18;
          do
          {
            result = wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(v30 + *(_QWORD *)(a1 + 8)));
            v30 += 8LL;
            --v31;
          }
          while ( v31 );
        }
      }
      else
      {
        v9 = a3 + a4;
        v10 = a3 - a2;
        for ( i = a3 + a4 - 1; (unsigned int)i >= *(_DWORD *)(a1 + 4); i = (unsigned int)(i - 1) )
        {
          v12 = *(_QWORD *)(a1 + 8);
          v13 = v9 - v10 - 1;
          v14 = *(_QWORD *)(v12 + 8 * v13);
          *(_QWORD *)(v12 + 8 * v13) = 0LL;
          v9 = i;
          *(_QWORD *)(v12 + 8 * i) = v14;
        }
        if ( v9 > a3 )
        {
          do
          {
            v15 = v9 - 1;
            wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8 * v15));
            v16 = *(_QWORD *)(a1 + 8);
            v17 = v9 - v10 - 1;
            result = *(NDIS_BIND_LINK_BASE ***)(v16 + 8 * v17);
            *(_QWORD *)(v16 + 8 * v17) = 0LL;
            v9 = v15;
            *(_QWORD *)(v16 + 8 * v15) = result;
          }
          while ( (unsigned int)v15 > a3 );
        }
        while ( v9 > a2 )
          result = wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8LL * --v9));
      }
    }
  }
  return result;
}
