/*
 * XREFs of _WerKernelSubmitReportForHungProcess@12 @ 0x1B9A56
 * Callers:
 *     ?WerSubmitReportWorker@@YGXPAX@Z @ 0x19FA64 (-WerSubmitReportWorker@@YGXPAX@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _WerStartSystemErrorHandler@0 @ 0x1B9DAB (_WerStartSystemErrorHandler@0.c)
 *     _WerWaitForSystemErrorHandler@4 @ 0x1B9E72 (_WerWaitForSystemErrorHandler@4.c)
 *     _WerpAllocateAndInitializeSid@44 @ 0x1B9F09 (_WerpAllocateAndInitializeSid@44.c)
 */

int __fastcall WerKernelSubmitReportForHungProcess(int a1, int a2, int a3)
{
  int v4; // esi
  int started; // eax
  NTSTATUS v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // esi
  unsigned int v12; // edx
  int v13; // eax
  int v15; // [esp-24h] [ebp-B84h]
  int v16; // [esp-20h] [ebp-B80h]
  int v17; // [esp-1Ch] [ebp-B7Ch]
  int v18; // [esp-18h] [ebp-B78h]
  int v19; // [esp-14h] [ebp-B74h]
  int v20; // [esp-10h] [ebp-B70h]
  int v21; // [esp-Ch] [ebp-B6Ch]
  int v22; // [esp-8h] [ebp-B68h]
  PVOID P; // [esp+10h] [ebp-B50h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-B4Ch] BYREF
  int v25; // [esp+18h] [ebp-B48h]
  int v26; // [esp+1Ch] [ebp-B44h] BYREF
  _DWORD SystemInformation[2]; // [esp+20h] [ebp-B40h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-B38h] BYREF
  _DWORD v29[10]; // [esp+30h] [ebp-B30h] BYREF
  __int16 v30; // [esp+58h] [ebp-B08h]
  _DWORD v31[11]; // [esp+5Ch] [ebp-B04h] BYREF
  _DWORD v32[346]; // [esp+88h] [ebp-AD8h] BYREF
  _DWORD v33[347]; // [esp+5F0h] [ebp-570h] BYREF

  v25 = a1;
  Handle = 0;
  memset(v32, 0, sizeof(v32));
  memset(v33, 0, 0x568u);
  v30 = 1280;
  v26 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  memset(v29, 0, 32);
  DestinationString.Buffer = 0;
  P = 0;
  v29[9] = 0;
  SystemInformation[0] = 0;
  SystemInformation[1] = 0;
  RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
  memset(v31, 0, sizeof(v31));
  v31[4] = 1384;
  v4 = WerpAllocateAndInitializeSid(v15, v16, v17, v18, v19, v20, v21, v22, &P);
  if ( v4 >= 0 )
  {
    started = WerStartSystemErrorHandler();
    v4 = started;
    if ( started >= 0 )
    {
      v6 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, SystemInformation, 8u, 0);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v7 = WerWaitForSystemErrorHandler(SystemInformation[0]);
        v4 = v7;
        if ( v7 >= 0 )
        {
          if ( v7 == 258 )
          {
            v4 = -1073740973;
            _DbgPrintEx(
              0x96u,
              0,
              "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler timed out, failing the call with 0x%x\n",
              1400,
              -1073740973);
          }
          else
          {
            v29[0] = 24;
            v29[1] = 0;
            v29[3] = 512;
            v29[2] = 0;
            v29[4] = 0;
            v29[5] = 0;
            v8 = ZwAlpcConnectPort(&Handle, &DestinationString, v29, v31, &loc_20000, P, 0, 0, 0, 0, 0);
            v4 = v8;
            if ( v8 >= 0 )
            {
              if ( v8 == 258 )
              {
                v4 = -1073740973;
                _DbgPrintEx(
                  0x96u,
                  0,
                  "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort timed out, failing the call with 0x%x\n",
                  1430,
                  -1073740973);
              }
              else
              {
                v32[0] = 90703184;
                v32[6] = 0x10000000;
                v32[8] = v25;
                v32[24] = a2;
                v32[62] = -1073741637;
                v9 = MEMORY[0xFFDF0004];
                v25 = MEMORY[0xFFDF0004];
                if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
                {
                  v11 = MEMORY[0xFFDF0324];
                  v12 = MEMORY[0xFFDF0320];
                  if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
                  {
                    do
                    {
                      _mm_pause();
                      v11 = MEMORY[0xFFDF0324];
                      v12 = MEMORY[0xFFDF0320];
                    }
                    while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
                    v9 = v25;
                  }
                  v10 = v9 * (v11 << 8) + (((unsigned int)v9 * (unsigned __int64)v12) >> 24);
                }
                else
                {
                  v10 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
                }
                v32[341] = v10;
                v32[340] = a3;
                memset(&v33[1], 0, 0x564u);
                v33[0] = 90703184;
                v26 = 1384;
                v13 = ZwAlpcSendWaitReceivePort(Handle, &loc_20000, v32, 0, v33, &v26, 0, 0);
                v4 = v13;
                if ( v13 < 0 || v13 == 258 )
                {
                  _DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcSendWaitReceivePort failed\n", 1461);
                }
                else if ( v33[7] >= 0 )
                {
                  v4 = 0;
                }
                else
                {
                  _DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Service returned failure\n", 1467);
                  v4 = -1073741823;
                }
              }
            }
            else
            {
              _DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort failed with 0x%x\n", 1423, v8);
            }
          }
        }
        else
        {
          _DbgPrintEx(
            0x96u,
            0,
            "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler failed with 0x%x\n",
            1393,
            v7);
        }
      }
      else
      {
        _DbgPrintEx(
          0x96u,
          0,
          "WERLIVEKERNELREPORTING:%u: ERROR ZwQuerySysInfo(ErrorPortTimeouts) failed with 0x%x\n",
          1386,
          v6);
      }
    }
    else
    {
      _DbgPrintEx(
        0x96u,
        0,
        "WERLIVEKERNELREPORTING:%u: ERROR WerStartSystemErrorHandler failed with 0x%x\n",
        1371,
        started);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  return v4;
}
