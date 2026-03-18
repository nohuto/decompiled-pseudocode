/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C016FD74
 * Callers:
 *     RIMCreatePointerDeviceDeadzone @ 0x1C015D050 (RIMCreatePointerDeviceDeadzone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01703B4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1C01703EC (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this, const struct tagRIMDEADZONE *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  __int64 v9; // r11
  unsigned int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rbp
  unsigned int i; // r9d
  __int64 v18; // r8
  __int128 v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+30h] [rbp-18h]

  v4 = 0;
  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  ++*((_DWORD *)this + 1);
  if ( !a2 )
    goto LABEL_26;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *((_DWORD *)a2 + 4) >= *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) >= *((_DWORD *)a2 + 3) )
    {
      *((_DWORD *)this + 4) = 1;
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 8);
      return v4;
    }
LABEL_26:
    v4 = -1073741811;
    goto LABEL_27;
  }
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_26;
  v7 = *((_DWORD *)a2 + 4);
  v8 = 0;
  if ( v7 )
  {
    v9 = *((_QWORD *)a2 + 1);
    do
    {
      v10 = _mm_cvtsi128_si32(*(__m128i *)(v9 + 24LL * v8));
      v20 = *(_OWORD *)(v9 + 24LL * v8);
      v21 = *(_QWORD *)(v9 + 24LL * v8 + 16);
      if ( v10 > 0x168 || DWORD1(v20) > 0x168 || v10 == DWORD1(v20) )
        goto LABEL_26;
      v11 = 0;
      if ( (_DWORD)v21 )
      {
        while ( *(_DWORD *)(*((_QWORD *)&v20 + 1) + 8LL * v11 + 4) >= *(_DWORD *)(*((_QWORD *)&v20 + 1) + 8LL * v11) )
        {
          if ( ++v11 >= (unsigned int)v21 )
            goto LABEL_14;
        }
        goto LABEL_26;
      }
LABEL_14:
      ;
    }
    while ( ++v8 < v7 );
  }
  *((_DWORD *)this + 4) = 2;
  v12 = *((unsigned int *)a2 + 4);
  *((_DWORD *)this + 8) = v12;
  v13 = Win32AllocPoolZInit(24 * v12, 1853506642LL);
  *((_QWORD *)this + 3) = v13;
  v14 = v13;
  if ( !v13 )
  {
LABEL_16:
    v4 = -1073741801;
LABEL_27:
    RIMDeadzone::Release(this);
    return v4;
  }
  v15 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    do
    {
      v16 = 3LL * v15;
      v14[v16] = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * v15);
      *(_DWORD *)(*((_QWORD *)this + 3) + 8 * v16 + 16) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 24LL * v15 + 16);
      *(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v15 + 8) = Win32AllocPoolZInit(
                                                              8LL
                                                            * *(unsigned int *)(*((_QWORD *)this + 3) + 24LL * v15 + 16),
                                                              1853506642LL);
      v14 = (_QWORD *)*((_QWORD *)this + 3);
      if ( !v14[3 * v15 + 1] )
        goto LABEL_16;
      for ( i = 0; i < LODWORD(v14[3 * v15 + 2]); v14 = (_QWORD *)*((_QWORD *)this + 3) )
      {
        v18 = i++;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v15 + 8) + 8 * v18) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * v15 + 8)
                                                                                               + 8 * v18);
      }
    }
    while ( ++v15 < *((_DWORD *)this + 8) );
  }
  RIMDeadzone::SetDeadzonePalmTelemetry(this);
  return v4;
}
