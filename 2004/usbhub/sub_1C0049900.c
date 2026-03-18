/*
 * XREFs of sub_1C0049900 @ 0x1C0049900
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0048FE8 @ 0x1C0048FE8 (sub_1C0048FE8.c)
 */

__int64 __fastcall sub_1C0049900(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        int a4,
        int a5,
        ULONG *a6,
        unsigned int a7,
        __int64 a8)
{
  ULONG v8; // edi
  int v13; // ebx
  int v14; // ebx
  _BYTE *v15; // r9
  __int64 v16; // r10
  char *v17; // r9
  __int64 v18; // r10
  int v19; // eax
  char v20; // cl
  ULONG *v21; // rax
  _DWORD *v22; // r9
  NTSTATUS v23; // r10d
  NTSTATUS v24; // eax
  unsigned int v25; // r10d
  ULONG v27; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  v27 = 0;
  sub_1C000F050((__int64)DeviceObject);
  if ( a3 )
  {
    v13 = a3 - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          if ( (int)sub_1C0048FE8((__int64)DeviceObject, a8, a7, &v27) >= 0 && a5 == 1 && a6 )
          {
            v8 = v27;
            *a6 = v27;
          }
          else
          {
            v8 = v27;
          }
        }
      }
      else if ( *(&stru_1C006B480.AlignmentRequirement + 1) == 3 )
      {
        sub_1C000FD80((__int64)DeviceObject, 64, 2003659059, a8, a7);
        v8 = 1;
        if ( a7 )
        {
          *v15 = *(_BYTE *)(v16 + 2563) & 1;
          *a6 = 1;
        }
      }
    }
    else
    {
      sub_1C000FD80((__int64)DeviceObject, 64, 2003659058, a8, a7);
      if ( !stru_1C006B480.AlignmentRequirement )
      {
        v19 = *(_DWORD *)(v18 + 3280);
        if ( v19 != 6 && !a4 )
        {
          v20 = 1;
          if ( a5 == 1 )
          {
            v8 = 1;
            if ( a7 )
            {
              if ( v19 <= 0 || v19 > 2 && v19 != 4 )
                v20 = 0;
              v21 = a6;
              *v17 = v20;
              *v21 = 1;
            }
          }
        }
      }
    }
  }
  else
  {
    sub_1C000FD80((__int64)DeviceObject, 64, 2003659057, (__int64)a6, 0LL);
    if ( v22 )
      *v22 = 0;
  }
  sub_1C000FD80((__int64)DeviceObject, 64, 2003659075, (__int64)Irp, v8);
  v24 = WmiCompleteRequest(DeviceObject, Irp, v23, v8, 0);
  sub_1C000FD80((__int64)DeviceObject, 64, 2003659078, 0LL, v24);
  return v25;
}
