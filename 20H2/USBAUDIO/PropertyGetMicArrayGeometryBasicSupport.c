/*
 * XREFs of PropertyGetMicArrayGeometryBasicSupport @ 0x1C00281D0
 * Callers:
 *     <none>
 * Callees:
 *     GetMicArrayGeometryInfo @ 0x1C0028154 (GetMicArrayGeometryInfo.c)
 */

__int64 __fastcall PropertyGetMicArrayGeometryBasicSupport(IRP *a1, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Options; // ebx
  unsigned int Length; // ebp
  PKSFILTER FilterFromIrp; // rax
  __int64 result; // rax
  __int64 v11; // r11
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( Options < 0x20 )
    return 3221225488LL;
  if ( (*(_DWORD *)(a2 + 20) & 0x200) == 0 )
    return 3221225659LL;
  v11 = 0LL;
  if ( FilterFromIrp )
    result = GetMicArrayGeometryInfo(FilterFromIrp, *(_DWORD *)(a2 + 24), &v12);
  else
    result = 3221226021LL;
  if ( (int)result >= 0 )
  {
    if ( Length >= 4 )
    {
      *(_DWORD *)a3 = 513;
      a1->IoStatus.Information = 4LL;
      if ( Length >= 0x28 )
      {
        *(_DWORD *)(a3 + 4) = 40;
        *(_QWORD *)(a3 + 24) = v11;
        *(_QWORD *)(a3 + 32) = v11;
        *(GUID *)(a3 + 8) = GUID_NULL;
        a1->IoStatus.Information = 40LL;
      }
      return (unsigned int)v11;
    }
    else
    {
      result = 3221225507LL;
      a1->IoStatus.Information = 40LL;
    }
  }
  return result;
}
