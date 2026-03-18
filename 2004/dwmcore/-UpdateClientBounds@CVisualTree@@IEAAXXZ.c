/*
 * XREFs of ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800C2550
 * Callers:
 *     ?EnsureClientInfo@CDesktopTree@@MEAAXXZ @ 0x1800C2430 (-EnsureClientInfo@CDesktopTree@@MEAAXXZ.c)
 *     ?EnsureClientInfo@CVisualTree@@MEAAXXZ @ 0x1800C2520 (-EnsureClientInfo@CVisualTree@@MEAAXXZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180044738 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800803D8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CVisualTree::UpdateClientBounds(CVisualTree *this)
{
  _DWORD *v1; // rdi
  char v2; // si
  void **v3; // r15
  _QWORD *v4; // r14
  _QWORD *v5; // rbx
  __int128 v6; // xmm6
  bool IsEmpty; // al
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v11; // r10d
  char v12; // r11
  int v13; // eax
  __int128 v14; // [rsp+28h] [rbp-49h] BYREF
  __int128 v15; // [rsp+38h] [rbp-39h] BYREF
  _DWORD *v16; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v17[3]; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v18[2]; // [rsp+5Ch] [rbp-15h] BYREF
  _DWORD v19[3]; // [rsp+64h] [rbp-Dh] BYREF
  _DWORD v20[10]; // [rsp+70h] [rbp-1h] BYREF
  void *retaddr; // [rsp+D0h] [rbp+5Fh]

  v1 = (_DWORD *)((char *)this + 5784);
  v2 = 0;
  *((_DWORD *)this + 1449) = 0;
  v3 = (void **)((char *)this + 5800);
  *((_DWORD *)this + 1448) = 0;
  *((_DWORD *)this + 1447) = 0;
  *((_DWORD *)this + 1446) = 0;
  **((_DWORD **)this + 725) = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 717);
  v5 = (_QWORD *)*((_QWORD *)this + 716);
  if ( v4 - v5 )
  {
    while ( v5 != v4 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(_QWORD, __int128 *))*v5)(*v5, &v15) )
      {
        v16 = v17;
        if ( SDWORD1(v15) >= SHIDWORD(v15) || (int)v15 >= SDWORD2(v15) )
        {
          v17[0] = 0;
        }
        else
        {
          v17[0] = 2;
          v17[1] = v15;
          v17[2] = DWORD2(v15);
          v18[0] = DWORD1(v15);
          v18[1] = (unsigned int)v20 + 1 - 5 - (unsigned int)v18;
          v19[2] = v15;
          v20[0] = DWORD2(v15);
          v19[1] = (unsigned int)v20 + 1 - 5 - (unsigned int)v19 + 8;
          v19[0] = HIDWORD(v15);
        }
        v6 = v15;
        v14 = v15;
        TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(v1);
        IsEmpty = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v14);
        if ( v12 )
        {
          if ( IsEmpty )
          {
            v1[3] = 0;
            v1[2] = 0;
            v1[1] = 0;
            *v1 = 0;
          }
          else
          {
            *(_OWORD *)v1 = v6;
          }
        }
        else if ( !IsEmpty )
        {
          if ( v8 < *v1 )
            *v1 = v8;
          if ( v10 < v1[1] )
            v1[1] = v10;
          if ( v9 > v1[2] )
            v1[2] = v9;
          if ( v11 > v1[3] )
            v1[3] = v11;
        }
        v13 = FastRegion::CRegion::Union(v3, (const struct FastRegion::Internal::CRgnData **)&v16);
        if ( v13 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v13, retaddr);
        FastRegion::CRegion::FreeMemory((void **)&v16);
      }
      else
      {
        v2 = 1;
      }
      ++v5;
    }
  }
  else
  {
    v2 = 1;
  }
  if ( v2 )
    *(_OWORD *)v1 = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcInfinite;
}
