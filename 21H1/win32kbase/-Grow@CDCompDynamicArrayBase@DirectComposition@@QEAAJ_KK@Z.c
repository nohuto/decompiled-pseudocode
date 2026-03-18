/*
 * XREFs of ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C008F3D4
 * Callers:
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C0030E74 (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C008D860 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C008F218 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00BFBBC (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00C0810 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C01E480C (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C01E5184 (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F1DC0 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F2DC0 (-SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCAppli.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::Grow(
        DirectComposition::CDCompDynamicArrayBase *this,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // r14
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // kr00_8

  v3 = *((_QWORD *)this + 3);
  v6 = v3 + a2;
  if ( v3 + a2 < v3 )
    return (unsigned int)-1073741801;
  v7 = *((_QWORD *)this + 2);
  v8 = 0;
  if ( v6 > v7 )
  {
    if ( !v7 )
      v7 = 64LL;
    while ( 1 )
    {
      v10 = 0;
      if ( v7 >= v6 || v7 >= 0x400 )
        break;
      v18 = v7;
      v7 *= 2LL;
      if ( !is_mul_ok(v18, 2uLL) )
      {
        v7 = -1LL;
        v10 = -1073741675;
        break;
      }
    }
    if ( v10 >= 0 )
    {
      while ( v7 < v6 )
      {
        if ( v7 + 1024 < v7 )
        {
          v7 = -1LL;
          v10 = -1073741675;
          break;
        }
        v7 += 1024LL;
        v10 = 0;
      }
      if ( v10 >= 0 && is_mul_ok(v7, *((_QWORD *)this + 4)) )
      {
        v11 = v7 * *((_QWORD *)this + 4);
        v12 = *((_BYTE *)this + 8) ? Win32AllocPoolWithQuota(v11, a3) : Win32AllocPool(v11, a3);
        v13 = (char *)v12;
        v14 = v12 == 0 ? 0xC0000017 : 0;
        if ( v12 )
        {
          v15 = *((_QWORD *)this + 3);
          if ( v15 )
          {
            memmove(v13, *(const void **)this, v15 * *((_QWORD *)this + 4));
            v15 = *((_QWORD *)this + 3);
          }
          memset(&v13[v15 * *((_QWORD *)this + 4)], 0, *((_QWORD *)this + 4) * (v7 - v15));
          if ( *(_QWORD *)this )
            Win32FreePool(*(_QWORD *)this, v16, v17);
          v3 = *((_QWORD *)this + 3);
          v8 = v14;
          *(_QWORD *)this = v13;
          *((_QWORD *)this + 2) = v7;
          goto LABEL_3;
        }
      }
    }
    return (unsigned int)-1073741801;
  }
LABEL_3:
  *((_QWORD *)this + 3) = a2 + v3;
  return v8;
}
