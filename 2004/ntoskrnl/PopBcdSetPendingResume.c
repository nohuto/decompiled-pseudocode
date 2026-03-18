/*
 * XREFs of PopBcdSetPendingResume @ 0x1407650A0
 * Callers:
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x140770F24 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140771660 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1407717EC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140771BFC (BcdSetElementDataWithFlags.c)
 *     PopBcdSetupResumeObject @ 0x140773D44 (PopBcdSetupResumeObject.c)
 */

__int64 __fastcall PopBcdSetPendingResume(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r8
  __int16 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v6 = PopBcdSetupResumeObject(a4);
  if ( v6 >= 0 )
  {
    v14 = (_BYTE)KdDebuggerEnabled != 0;
    BcdSetElementDataWithFlags(a4, 637534214LL, v7, &v14, 2);
    v6 = BcdQueryObject(a4, 0LL, 0LL, &v16);
    if ( v6 >= 0 )
    {
      v8 = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &v15);
      v10 = v15;
      v6 = v8;
      if ( v8 >= 0 )
      {
        v6 = BcdSetElementDataWithFlags(v15, 587202566LL, v9, &v16, 16);
        if ( v6 >= 0 )
        {
          v14 = 1;
          v6 = BcdSetElementDataWithFlags(v10, 637534213LL, v11, &v14, 2);
          if ( v6 >= 0 )
          {
            v14 = (unsigned __int8)byte_140C23060;
            v6 = BcdSetElementDataWithFlags(v10, 637534245LL, v12, &v14, 2);
            if ( v6 >= 0 )
              v6 = 0;
          }
        }
      }
      if ( v10 )
        BcdCloseObject(v10);
    }
  }
  return (unsigned int)v6;
}
