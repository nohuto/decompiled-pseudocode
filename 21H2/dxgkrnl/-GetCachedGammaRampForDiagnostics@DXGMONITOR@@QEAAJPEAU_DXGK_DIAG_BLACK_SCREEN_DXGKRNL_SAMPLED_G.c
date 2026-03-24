/*
 * XREFs of ?GetCachedGammaRampForDiagnostics@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA@@@Z @ 0x1C02FB494
 * Callers:
 *     MonitorGetCachedApiGammaRampForDiagnostics @ 0x1C02F3A34 (MonitorGetCachedApiGammaRampForDiagnostics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::GetCachedGammaRampForDiagnostics(
        DXGMONITOR *this,
        struct _DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA *a2)
{
  struct _FAST_MUTEX *v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // esi
  int v9; // r9d
  _DWORD *v10; // r11
  unsigned int v11; // r10d
  __int64 v12; // rax
  char *v13; // r10
  __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // r11
  float *v17; // r10
  unsigned int v18; // r8d
  unsigned int v19; // eax
  __int64 v20; // rax

  v2 = (struct _FAST_MUTEX *)((char *)this + 1184);
  if ( this == (DXGMONITOR *)-1184LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(-1184LL, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  KeAcquireGuardedMutex(v2);
  v7 = *((_QWORD *)this + 155);
  if ( !v7 )
  {
    v8 = 0;
    v9 = 1;
LABEL_9:
    *((_DWORD *)a2 + 57) = v9;
    goto LABEL_24;
  }
  v6 = (unsigned int)(*(_DWORD *)(v7 + 16) - 1);
  if ( *(_DWORD *)(v7 + 16) == 1 )
  {
    *((_DWORD *)a2 + 57) = 0;
  }
  else
  {
    v6 = (unsigned int)(*(_DWORD *)(v7 + 16) - 2);
    if ( *(_DWORD *)(v7 + 16) == 2 )
    {
      v17 = (float *)((char *)a2 + 132);
      v18 = 1;
      *(float *)a2 = (float)**(unsigned __int16 **)(v7 + 32);
      *((float *)a2 + 16) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 512LL);
      *((float *)a2 + 32) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 1024LL);
      do
      {
        v19 = 16 * v18;
        if ( 16 * v18 >= 0xFF )
          break;
        v7 = v19;
        ++v18;
        *(v17 - 32) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 2LL * v19);
        *(v17 - 16) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 2LL * v19 + 512);
        *v17++ = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 2LL * v19 + 1024);
      }
      while ( v18 < 0xF );
      *((float *)a2 + 15) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 510LL);
      *((float *)a2 + 31) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 1022LL);
      v6 = *(_QWORD *)(*((_QWORD *)this + 155) + 32LL);
      *((float *)a2 + 47) = (float)*(unsigned __int16 *)(v6 + 1534);
      *((_DWORD *)a2 + 57) = 3;
    }
    else
    {
      if ( *(_DWORD *)(v7 + 16) != 4 )
      {
        v8 = -1073741811;
        v9 = 2;
        goto LABEL_9;
      }
      v10 = (_DWORD *)((char *)a2 + 132);
      v11 = 1;
      *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v7 + 32) + 52LL);
      *((_DWORD *)a2 + 16) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 56LL);
      *((_DWORD *)a2 + 32) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 60LL);
      do
      {
        v12 = v11 << 8;
        if ( (unsigned int)v12 >= 0xFFF )
          break;
        ++v11;
        *(v10 - 32) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 12 * v12 + 52);
        *(v10 - 16) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 12 * v12 + 56);
        *v10++ = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 12LL * (unsigned int)v12 + 60);
      }
      while ( v11 < 0xF );
      v13 = (char *)a2 + 192;
      v14 = 0LL;
      v15 = 3LL;
      *((_DWORD *)a2 + 15) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 49192LL);
      *((_DWORD *)a2 + 31) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 49196LL);
      *((_DWORD *)a2 + 47) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 155) + 32LL) + 49200LL);
      do
      {
        v7 = v14;
        v16 = 3LL;
        do
        {
          v6 = *(_QWORD *)(*((_QWORD *)this + 155) + 32LL);
          *(_DWORD *)&v13[v7] = *(_DWORD *)(v7 + v6);
          v7 += 4LL;
          --v16;
        }
        while ( v16 );
        v14 += 16LL;
        v13 -= 4;
        --v15;
      }
      while ( v15 );
      *((_DWORD *)a2 + 57) = 4;
    }
  }
  v8 = 0;
LABEL_24:
  if ( !v2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6, v7);
    WdLogEvent5_WdAssertion(v20);
  }
  KeReleaseGuardedMutex(v2);
  return v8;
}
