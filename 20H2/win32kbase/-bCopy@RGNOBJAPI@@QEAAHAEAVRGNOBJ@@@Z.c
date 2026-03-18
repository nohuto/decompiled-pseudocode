/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0090190
 * Callers:
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     GreCopyVisRgn @ 0x1C00900F0 (GreCopyVisRgn.c)
 * Callees:
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0037A40 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003C1F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003C9D0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003CAC0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  __int64 v2; // rax
  __int64 v4; // r9
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)this;
  v6 = 112;
  v7 = *(_DWORD *)(v2 + 80);
  v8 = *(_DWORD *)(v4 + 24);
  if ( v8 < v7 && *(_DWORD *)(v2 + 24) > 0x70u || v8 > 0x70 && *(_DWORD *)(v2 + 24) <= 0x70u )
  {
    if ( v7 > 0x70 )
      v6 = *(_DWORD *)(v2 + 80);
    v10 = 0;
    v13 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v12, v6);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
    if ( v12 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v12, a2);
      v10 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v12, v11);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
    return v10;
  }
  else
  {
    *(_DWORD *)(v4 + 80) = v7;
    *(_DWORD *)(*(_QWORD *)this + 84LL) = *(_DWORD *)(*(_QWORD *)a2 + 84LL);
    *(_OWORD *)(*(_QWORD *)this + 96LL) = *(_OWORD *)(*(_QWORD *)a2 + 96LL);
    memmove(
      *(void **)(*(_QWORD *)this + 88LL),
      *(const void **)(*(_QWORD *)a2 + 88LL),
      *(unsigned int *)(*(_QWORD *)a2 + 80LL));
    *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL)
                                        + *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                        - *(_DWORD *)(*(_QWORD *)a2 + 88LL);
    return 1LL;
  }
}
