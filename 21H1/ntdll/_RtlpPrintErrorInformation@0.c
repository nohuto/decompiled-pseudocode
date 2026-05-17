/*
 * XREFs of _RtlpPrintErrorInformation@0 @ 0x4B36F67B
 * Callers:
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 */

int __stdcall RtlpPrintErrorInformation()
{
  const char *v0; // esi

  v0 = (const char *)&dword_4B2850A4;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Heap error detected at %p (heap handle %p)\n", (const void *)dword_4B3A3970, (const void *)dword_4B3A396C);
  switch ( dword_4B3A3968 )
  {
    case 0:
      v0 = "heap_failure_internal";
      break;
    case 1:
      v0 = "heap_failure_unknown";
      break;
    case 2:
      v0 = "heap_failure_generic";
      break;
    case 3:
      v0 = "heap_failure_entry_corruption";
      break;
    case 4:
      v0 = "heap_failure_multiple_entries_corruption";
      break;
    case 5:
      v0 = "heap_failure_virtual_block_corruption";
      break;
    case 6:
      v0 = "heap_failure_buffer_overrun";
      break;
    case 7:
      v0 = "heap_failure_buffer_underrun";
      break;
    case 8:
      v0 = "heap_failure_block_not_busy";
      break;
    case 9:
      v0 = "heap_failure_invalid_argument";
      break;
    case 10:
      v0 = "heap_failure_invalid_allocation_type";
      break;
    case 11:
      v0 = "heap_failure_usage_after_free";
      break;
    case 12:
      v0 = "heap_failure_cross_heap_operation";
      break;
    case 13:
      v0 = "heap_failure_freelists_corruption";
      break;
    case 14:
      v0 = "heap_failure_listentry_corruption";
      break;
    case 15:
      v0 = "heap_failure_lfh_bitmap_mismatch";
      break;
    default:
      break;
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Error code: %d - %s\n", dword_4B3A3968, v0);
  if ( dword_4B3A3974 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter1: %p\n", (const void *)dword_4B3A3974);
  }
  if ( dword_4B3A3978 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter2: %p\n", (const void *)dword_4B3A3978);
  }
  if ( dword_4B3A397C )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter3: %p\n", (const void *)dword_4B3A397C);
  }
  if ( dword_4B3A3980 || dword_4B3A3984 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "Last known valid blocks: before - %p, after - %p\n",
      (const void *)dword_4B3A3980,
      (const void *)dword_4B3A3984);
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  return DbgPrint("Stack trace available at %p\n", &BackTrace);
}
