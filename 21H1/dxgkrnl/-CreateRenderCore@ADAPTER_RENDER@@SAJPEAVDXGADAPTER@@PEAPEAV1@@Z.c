/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0178090
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0176AF4 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C00351B4 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C016DC78 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C017B77C (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0211650 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        __int64 (__fastcall **a1)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *),
        struct ADAPTER_RENDER **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall *v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r8
  __int64 (__fastcall *v7)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rax
  __int64 (__fastcall *v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 (__fastcall *v9)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rcx
  ADAPTER_RENDER *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  ADAPTER_RENDER *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rax
  __int64 result; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax

  if ( !a1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v28 + 24) = 478LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !a2 )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v29 + 24) = 479LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !*((_BYTE *)a1 + 209) )
  {
    if ( !*((_BYTE *)a1 + 352)
      || !a1[46]
      || !a1[48]
      || !a1[49]
      || !a1[78]
      || !a1[79]
      || !a1[50]
      || !a1[54]
      || !a1[55]
      || !a1[56]
      || !a1[60]
      || !a1[61]
      || !a1[64] && *((int *)a1 + 643) < 2000
      || !a1[75] && ((_DWORD)a1[318] & 8) == 0
      || !a1[77]
      || !a1[63]
      || !a1[81] )
    {
      if ( *((int *)a1 + 643) < 1200 )
      {
        v27 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v27 + 24) = 555LL;
      }
      else
      {
        if ( !a1[46]
          && !a1[48]
          && !a1[49]
          && !a1[78]
          && !a1[79]
          && !a1[50]
          && !a1[54]
          && !a1[55]
          && !a1[56]
          && !a1[60]
          && !a1[61]
          && !a1[64]
          && !a1[77]
          && !a1[81]
          && !a1[47]
          && !a1[53]
          && !a1[80]
          && !a1[88]
          && !a1[51]
          && !a1[52]
          && !a1[74]
          && !a1[76]
          && !a1[82]
          && !a1[83]
          && !a1[84] )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 543LL;
          result = 0LL;
          *a2 = 0LL;
          return result;
        }
        v27 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v27 + 24) = 537LL;
      }
      goto LABEL_139;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 507LL;
    v6 = a1[76];
    if ( !v6 )
    {
      a1[76] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v6 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v7 = a1[82];
    if ( !v7 )
    {
      a1[82] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v7 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v8 = a1[83];
    if ( !v8 )
    {
      a1[83] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v8 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v9 = a1[84];
    if ( !v9 )
    {
      a1[84] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v9 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    if ( !a1[74] )
      a1[74] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !a1[51] )
      a1[51] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !a1[52] )
      a1[52] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( v6 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      if ( v7 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
        && v8 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
        && v9 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      {
        goto LABEL_41;
      }
    }
    else if ( v9 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           && v8 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           && v7 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
LABEL_41:
      v10 = *((unsigned int *)a1 + 576);
      if ( (((_DWORD)v10 - 4096) & 0xFFFFFCFF) != 0 || (_DWORD)v10 == 4352 || a1[47] && a1[53] && a1[80] )
      {
        v11 = *((_DWORD *)a1 + 505);
        if ( (v11 & 4) != 0 )
        {
          if ( !a1[88] )
          {
            v30 = WdLogNewEntry5_WdError(v10, v9);
            *(_QWORD *)(v30 + 24) = 637LL;
LABEL_113:
            WdLogEvent5_WdError(v30);
            return 3221225485LL;
          }
          if ( *((int *)a1 + 643) < 1105 )
          {
            v32 = WdLogNewEntry5_WdWarning(v10, v9, v6);
            *(_QWORD *)(v32 + 24) = a1;
            WdLogEvent5_WdWarning(v32);
            *((_DWORD *)a1 + 505) &= ~4u;
            v11 = *((_DWORD *)a1 + 505);
            a1[88] = 0LL;
          }
          if ( (v11 & 0x20000000) != 0 )
          {
            v30 = WdLogNewEntry5_WdError(v10, v9);
            *(_QWORD *)(v30 + 24) = 649LL;
            goto LABEL_113;
          }
        }
        if ( *((_DWORD *)a1 + 503) > 4u )
          *((_DWORD *)a1 + 503) = 4;
        if ( !*((_DWORD *)a1 + 502)
          || a1[51] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
          && a1[52] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
        {
          v12 = *((_DWORD *)a1 + 508);
          if ( (v12 & 1) != 0 )
          {
            if ( *((int *)a1 + 576) >= 0x2000 )
              goto LABEL_61;
            v13 = *((_DWORD *)a1 + 511);
            if ( v13 )
            {
              v14 = *((_DWORD *)a1 + 70) * v13;
              if ( v14 > 0x40 && *((int *)a1 + 643) <= 2400 )
              {
                v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, 0x2000LL, v6);
                v31[3] = a1;
                v31[4] = 64LL;
                v31[5] = *((unsigned int *)a1 + 70);
                v31[6] = *((unsigned int *)a1 + 511);
                goto LABEL_115;
              }
              *((_DWORD *)a1 + 642) = v14;
LABEL_61:
              if ( *((_BYTE *)a1 + 2584)
                && *((int *)a1 + 576) >= 4608
                && (!*((_DWORD *)a1 + 624)
                 || !*((_DWORD *)a1 + 625)
                 || !*((_BYTE *)a1 + 2506)
                 || (*((_DWORD *)a1 + 507) & 2) == 0
                 || (*((_DWORD *)a1 + 87) & 0x10) == 0 && (*((_DWORD *)a1 + 505) & 4) == 0) )
              {
                v30 = WdLogNewEntry5_WdError(v10, 0x2000LL);
                *(_QWORD *)(v30 + 24) = 728LL;
                goto LABEL_113;
              }
              v15 = *((unsigned int *)a1 + 576);
              if ( (int)v15 >= 0x2000 && (*((_DWORD *)a1 + 507) & 2) == 0 )
              {
                v30 = WdLogNewEntry5_WdError(v15, 0x2000LL);
                *(_QWORD *)(v30 + 24) = *((unsigned int *)a1 + 507);
                goto LABEL_113;
              }
              if ( (int)v15 >= 4864 && !a1[98] )
              {
                v30 = WdLogNewEntry5_WdError(v15, 0x2000LL);
                *(_QWORD *)(v30 + 24) = 750LL;
                goto LABEL_113;
              }
              if ( (int)v15 >= 9216 && (*((_DWORD *)a1 + 509) & 0x800) != 0 && (!a1[156] || !a1[157]) )
              {
                v30 = WdLogNewEntry5_WdError(v15, 0x2000LL);
                *(_QWORD *)(v30 + 24) = 765LL;
                goto LABEL_113;
              }
              goto LABEL_68;
            }
          }
          else if ( (v12 & 4) == 0 && (v12 & 0x10) == 0 )
          {
            *((_DWORD *)a1 + 511) = 1;
            *((_DWORD *)a1 + 642) = 1;
            goto LABEL_61;
          }
          v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, 0x2000LL, v6);
          v31[3] = a1;
LABEL_115:
          WdLogEvent5_WdWarning(v31);
          return 3221225485LL;
        }
        v27 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v27 + 24) = 664LL;
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v27 + 24) = 628LL;
      }
LABEL_139:
      WdLogEvent5_WdError(v27);
      return 3221225561LL;
    }
    v27 = WdLogNewEntry5_WdError(v8, v9);
    *(_QWORD *)(v27 + 24) = 608LL;
    goto LABEL_139;
  }
LABEL_68:
  v16 = (ADAPTER_RENDER *)operator new(0x680uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v16 )
    v21 = ADAPTER_RENDER::ADAPTER_RENDER(v16, (struct DXGADAPTER *)a1);
  else
    v21 = 0LL;
  if ( v21 )
  {
    v24 = ADAPTER_RENDER::Initialize(v21);
    if ( v24 < 0 )
    {
      ADAPTER_RENDER::Destroy(v21);
      ADAPTER_RENDER::`scalar deleting destructor'(v21);
    }
    else
    {
      v25 = WdLogNewEntry5_WdEvent(v23, v22);
      *(_QWORD *)(v25 + 24) = v21;
      *(_QWORD *)(v25 + 32) = a1;
      WdLogEvent5_WdEvent(v25);
      *a2 = v21;
    }
    return (unsigned int)v24;
  }
  else
  {
    v33 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
    *(_QWORD *)(v33 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v33);
    return 3221225495LL;
  }
}
