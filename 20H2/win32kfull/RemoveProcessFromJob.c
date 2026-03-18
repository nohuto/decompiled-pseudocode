/*
 * XREFs of RemoveProcessFromJob @ 0x1C003E540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C003ED04 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall RemoveProcessFromJob(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // ecx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  int v10; // edx
  int v11; // ecx
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF

  CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(&v13);
  v4 = *(_QWORD *)(a1 + 768);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qq(
      v3,
      v2,
      13,
      18,
      (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids,
      a1,
      *(_QWORD *)(a1 + 768));
  }
  v5 = 0;
  if ( v4 )
  {
    v7 = *(_DWORD *)(v4 + 28);
    v8 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        v3 = v8;
        if ( a1 == *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8LL * v8) )
          break;
        if ( ++v8 >= v7 )
          goto LABEL_13;
      }
      *(_QWORD *)(a1 + 768) = 0LL;
      v9 = *(_QWORD *)(v4 + 40) + 8LL * v8;
      memmove((void *)v9, (const void *)(v9 + 8), 8LL * (*(_DWORD *)(v4 + 28) - v8 - 1));
      if ( (*(_DWORD *)(v4 + 28))-- == 1 )
      {
        Win32FreePool(*(_QWORD *)(v4 + 40));
        *(_QWORD *)(v4 + 40) = 0LL;
        *(_DWORD *)(v4 + 32) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_qq(v11, v10, 13, 19, (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, a1, v4);
      }
      return 1;
    }
    else
    {
LABEL_13:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_qq(v3, v8, 13, 20, (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, a1, v4);
      }
    }
  }
  return v5;
}
