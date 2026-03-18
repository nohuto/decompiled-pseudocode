/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800C9390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180017C10 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004933C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     McTemplateU0pxffffffffffffffff_EventWriteTransfer @ 0x1801B4AD4 (McTemplateU0pxffffffffffffffff_EventWriteTransfer.c)
 */

char __fastcall CDesktopTreeData::SetWorldTransform(
        CDesktopTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  char v4; // si
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v11; // rcx
  _OWORD *v12; // rax
  void *v13; // rcx
  CVisual *v14; // r10
  int v15; // edx
  int v16; // r11d
  __int64 v17; // [rsp+C0h] [rbp+8h] BYREF

  v4 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 36) + 16LL) + 496LL);
  if ( *((float *)this + 78) != *(float *)a2
    || *((float *)this + 79) != *((float *)a2 + 1)
    || *((float *)this + 80) != *((float *)a2 + 2)
    || *((float *)this + 81) != *((float *)a2 + 3)
    || *((float *)this + 82) != *((float *)a2 + 4)
    || *((float *)this + 83) != *((float *)a2 + 5)
    || *((float *)this + 84) != *((float *)a2 + 6)
    || *((float *)this + 85) != *((float *)a2 + 7)
    || *((float *)this + 86) != *((float *)a2 + 8)
    || *((float *)this + 87) != *((float *)a2 + 9)
    || *((float *)this + 88) != *((float *)a2 + 10)
    || *((float *)this + 89) != *((float *)a2 + 11)
    || *((float *)this + 90) != *((float *)a2 + 12)
    || *((float *)this + 91) != *((float *)a2 + 13)
    || *((float *)this + 92) != *((float *)a2 + 14)
    || *((float *)this + 93) != *((float *)a2 + 15) )
  {
    v4 = 1;
    *(_OWORD *)((char *)this + 312) = *(_OWORD *)a2;
    *(_OWORD *)((char *)this + 328) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 344) = *((_OWORD *)a2 + 2);
    *(_OWORD *)((char *)this + 360) = *((_OWORD *)a2 + 3);
    *((_DWORD *)this + 94) = *((_DWORD *)a2 + 16);
  }
  *((_BYTE *)this + 11) = a3;
  if ( a4 )
  {
    v11 = *((_QWORD *)this + 37);
    if ( v11 )
    {
      *(_OWORD *)v11 = *(_OWORD *)a4;
      *(_OWORD *)(v11 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v11 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v11 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v11 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v12 = operator new(0x44uLL);
      v13 = v12;
      if ( v12 )
      {
        *v12 = *(_OWORD *)a4;
        v12[1] = *((_OWORD *)a4 + 1);
        v12[2] = *((_OWORD *)a4 + 2);
        v12[3] = *((_OWORD *)a4 + 3);
        *((_DWORD *)v12 + 16) = *((_DWORD *)a4 + 16);
      }
      else
      {
        v13 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 37, (signed __int64)v13, 0LL) )
        operator delete(v13, 0x44uLL);
    }
  }
  if ( v4 || (v9 = *((_QWORD *)this + 34)) == 0 )
  {
    *((_QWORD *)this + 34) = v8;
  }
  else if ( v9 != v8 )
  {
    return 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
  {
    if ( CVisual::GetInputHandle(*((CVisual **)this + 36)) )
    {
      CVisual::GetInputLuid(v14, &v17);
      McTemplateU0pxffffffffffffffff_EventWriteTransfer(
        v17,
        v15,
        v16,
        v17,
        *(_DWORD *)a2,
        *((_DWORD *)a2 + 1),
        *((_DWORD *)a2 + 2),
        *((_DWORD *)a2 + 3),
        *((_DWORD *)a2 + 4),
        *((_DWORD *)a2 + 5),
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        *((_DWORD *)a2 + 8),
        *((_DWORD *)a2 + 9),
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 11),
        *((_DWORD *)a2 + 12),
        *((_DWORD *)a2 + 13),
        *((_DWORD *)a2 + 14),
        *((_DWORD *)a2 + 15));
    }
  }
  return 1;
}
