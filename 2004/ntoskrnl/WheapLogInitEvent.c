/*
 * XREFs of WheapLogInitEvent @ 0x140797428
 * Callers:
 *     WheaInitialize @ 0x140A5A6DC (WheaInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     WheaLogInternalEvent @ 0x1403B78B0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void WheapLogInitEvent()
{
  char *PoolWithTag; // rdi
  __int64 *v1; // rdx
  int i; // r8d
  __int64 *v3; // rcx
  __int64 v4; // r9
  char *v5; // rax
  __int128 v6; // xmm1
  PVOID DeviceObject; // rsi
  unsigned int v8; // ebx
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  unsigned int v11; // r8d
  unsigned int Size; // [rsp+38h] [rbp-9h] BYREF
  int Size_4; // [rsp+3Ch] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *p_Size_4; // [rsp+58h] [rbp+17h]
  int v16; // [rsp+60h] [rbp+1Fh]
  int v17; // [rsp+64h] [rbp+23h]
  unsigned int *p_Size; // [rsp+68h] [rbp+27h]
  int v19; // [rsp+70h] [rbp+2Fh]
  int v20; // [rsp+74h] [rbp+33h]
  char *v21; // [rsp+78h] [rbp+37h]
  unsigned int v22; // [rsp+80h] [rbp+3Fh]
  int v23; // [rsp+84h] [rbp+43h]

  Size = 1072 * dword_140CDAF1C;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(1072 * dword_140CDAF1C), 0x61656857u);
  if ( PoolWithTag )
  {
    v1 = (__int64 *)qword_140CDAF28;
    for ( i = 0; v1 != &qword_140CDAF28; v1 = (__int64 *)*v1 )
    {
      v3 = v1;
      v4 = 8LL;
      v5 = &PoolWithTag[1072 * i];
      do
      {
        *(_OWORD *)v5 = *(_OWORD *)v3;
        *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
        *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
        *((_OWORD *)v5 + 3) = *((_OWORD *)v3 + 3);
        *((_OWORD *)v5 + 4) = *((_OWORD *)v3 + 4);
        *((_OWORD *)v5 + 5) = *((_OWORD *)v3 + 5);
        *((_OWORD *)v5 + 6) = *((_OWORD *)v3 + 6);
        v5 += 128;
        v6 = *((_OWORD *)v3 + 7);
        v3 += 16;
        *((_OWORD *)v5 - 1) = v6;
        --v4;
      }
      while ( v4 );
      ++i;
      *(_OWORD *)v5 = *(_OWORD *)v3;
      *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
      *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
    }
    DeviceObject = WheapDispatchPtr.Queue.Wcb.DeviceObject;
    v8 = Size;
    UserData.Reserved = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    UserData.Ptr = (ULONGLONG)&dword_140CDAF1C;
    p_Size_4 = &Size_4;
    p_Size = &Size;
    UserData.Size = 4;
    Size_4 = 10;
    v16 = 4;
    v19 = 4;
    v21 = PoolWithTag;
    v22 = Size;
    if ( EtwEventEnabled((REGHANDLE)WheapDispatchPtr.Queue.Wcb.DeviceObject, &EVENT_WHEA_INIT_OP) == 1 )
    {
      EtwWrite((REGHANDLE)DeviceObject, &EVENT_WHEA_INIT_OP, 0LL, 4u, &UserData);
      v8 = Size;
    }
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, v8 + 32LL, 0x61656857u);
    v10 = v9;
    if ( v9 )
    {
      v11 = Size;
      v9[3] = 0;
      *v9 = 1733060695;
      v9[1] = 1;
      v9[5] = -2147483646;
      v9[2] = v11 + 32;
      v9[4] = 1280201291;
      v9[6] = 2;
      v9[7] = v11;
      memmove(v9 + 8, PoolWithTag, Size);
      WheaLogInternalEvent(v10);
      ExFreePoolWithTag(v10, 0x61656857u);
    }
    ExFreePoolWithTag(PoolWithTag, 0x61656857u);
  }
}
