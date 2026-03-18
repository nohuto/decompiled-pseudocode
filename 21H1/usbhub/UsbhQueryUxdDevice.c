/*
 * XREFs of UsbhQueryUxdDevice @ 0x1C005B530
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001D080 (memmove.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E62C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B2A0 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhQueryUxdDevice(__int64 a1, __int64 a2, const void *a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  SIZE_T v6; // rdi
  int v8; // esi
  unsigned int v10; // ebx
  int v12; // esi
  void *v13; // rcx
  PVOID PoolWithTag; // rax
  __int64 v15; // [rsp+28h] [rbp-30h]

  v6 = a4;
  v8 = a2;
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xBu,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          (_DWORD)a3,
          12,
          (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
          a1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v15) = v8;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            0,
            1u,
            0xDu,
            (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
            v15);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              a2,
              1u,
              0xEu,
              (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
              a3);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v15) = v6;
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                0,
                1u,
                0xFu,
                (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
                v15);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_q(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  1u,
                  0x10u,
                  (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
                  a5);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_q(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  1u,
                  0x11u,
                  (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
                  a6);
              }
            }
          }
        }
      }
    }
  }
  if ( !a6 )
    return 3221225485LL;
  v12 = v8 - 1;
  if ( !v12 )
  {
    if ( (unsigned int)v6 <= 0x200 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
      *(_QWORD *)a6 = PoolWithTag;
      if ( !PoolWithTag )
        return v10;
      memset(PoolWithTag, 0, v6);
      v13 = *(void **)a6;
      if ( !*(_QWORD *)a6 )
        return v10;
      a6[2] = v6;
      goto LABEL_34;
    }
    return (unsigned int)-2147483643;
  }
  if ( v12 == 2 )
  {
    if ( (unsigned int)v6 <= 0x44 )
    {
      v13 = a6;
LABEL_34:
      memmove(v13, a3, v6);
      return v10;
    }
    return (unsigned int)-2147483643;
  }
  return (unsigned int)-1073741811;
}
