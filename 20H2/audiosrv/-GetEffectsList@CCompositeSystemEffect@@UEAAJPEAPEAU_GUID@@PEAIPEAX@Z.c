/*
 * XREFs of ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180122390
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18004BAE4 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BB0C8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?Add@?$CSimpleArray@PEAUtWAVEFORMATEX@@V?$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@@QEAAHAEBQEAUtWAVEFORMATEX@@@Z @ 0x180119D28 (-Add@-$CSimpleArray@PEAUtWAVEFORMATEX@@V-$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@.c)
 *     ?Add@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z @ 0x180122270 (-Add@-$CSimpleArray@IV-$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetEffectsList(
        CCompositeSystemEffect *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  unsigned int v4; // edi
  void *v5; // rbx
  signed int v9; // esi
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  SIZE_T v13; // rbx
  struct _GUID *v14; // rdx
  __int64 v15; // rcx
  int v16; // r13d
  __int64 v17; // r14
  struct _GUID *v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned int v21; // [rsp+30h] [rbp-40h]
  void *Src; // [rsp+38h] [rbp-38h]
  struct _GUID *v23; // [rsp+40h] [rbp-30h] BYREF
  void *v24; // [rsp+48h] [rbp-28h] BYREF
  int v25; // [rsp+50h] [rbp-20h]
  int v26; // [rsp+54h] [rbp-1Ch]
  void *Block; // [rsp+58h] [rbp-18h] BYREF
  int v28; // [rsp+60h] [rbp-10h]
  int v29; // [rsp+64h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v31; // [rsp+B8h] [rbp+48h] BYREF
  void *v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  v24 = 0LL;
  v4 = 0;
  v25 = 0;
  v5 = a4;
  v26 = 0;
  Block = 0LL;
  v28 = 0;
  v29 = 0;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    v9 = 0;
    *a3 = 0;
    if ( *((int *)this + 20) > 0 )
    {
      do
      {
        v10 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                          (__int64)this + 72,
                          v9);
        v11 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *, void *))(*(_QWORD *)*v10 + 24LL))(
                *v10,
                &v23,
                &v31,
                v5);
        v12 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x44A,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v11);
          goto LABEL_31;
        }
        ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::Add((__int64)&v24, &v23);
        ATL::CSimpleArray<unsigned int,ATL::CSimpleArrayEqualHelper<unsigned int>>::Add((__int64)&Block, &v31);
        v4 += v31;
        ++v9;
        v5 = v32;
      }
      while ( v9 < *((_DWORD *)this + 20) );
      if ( v4 )
      {
        v13 = 16LL * v4;
        v23 = (struct _GUID *)CoTaskMemAlloc(v13);
        v14 = v23;
        if ( !v23 )
        {
          v12 = -2147024882;
          goto LABEL_31;
        }
        v15 = 0LL;
        v16 = 0;
        v31 = 0;
        if ( v25 > 0 )
        {
          v17 = 0LL;
          while ( 1 )
          {
            if ( v17 < 0 )
            {
              ATL::_AtlRaiseException(0xC000008C);
              __debugbreak();
            }
            Src = (void *)*((_QWORD *)v24 + v17);
            if ( v16 >= v28 )
            {
              ATL::_AtlRaiseException(0xC000008C);
              __debugbreak();
            }
            v18 = &v14[v15];
            v21 = *((_DWORD *)Block + v17);
            v19 = 16LL * v21;
            if ( v19 )
            {
              if ( !v18 )
                goto LABEL_15;
              if ( Src && v13 >= v19 )
              {
                memcpy_0(v18, Src, 16LL * v21);
                goto LABEL_23;
              }
              memset_0(v18, 0, v13);
              if ( Src )
              {
                if ( v13 >= v19 )
                  goto LABEL_23;
                *(_DWORD *)_o__errno(v18) = 34;
              }
              else
              {
LABEL_15:
                *(_DWORD *)_o__errno(v18) = 22;
              }
              invalid_parameter_noinfo();
            }
LABEL_23:
            v13 -= v19;
            v31 += v21;
            CoTaskMemFree(Src);
            v14 = v23;
            ++v16;
            ++v17;
            if ( v16 >= v25 )
              break;
            v15 = v31;
          }
        }
        *a2 = v14;
        *a3 = v4;
      }
    }
    v12 = 0;
  }
  else
  {
    v12 = -2147467261;
  }
LABEL_31:
  if ( Block )
    free(Block);
  if ( v24 )
    free(v24);
  return v12;
}
